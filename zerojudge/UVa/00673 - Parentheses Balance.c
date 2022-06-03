#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++){
        char s[128] = {0};
        int stack[128] = {0};
        int top = -1;
        int flag = 0;
        gets(s);
        for(int i = 0; i < strlen(s); i++){
            if(s[i] == '('){
                top++;
                stack[top] = 1;
            }
            else if(s[i] == '['){
                top++;
                stack[top] = 2;
            }
            else if(s[i] == ')'){
                if(stack[top] == 1 && top > -1){
                    stack[top] = 0;
                    top--;
                }
                else {
                    printf("No\n");
                    flag = 1;
                    break;
                }
            }
            else if(s[i] == ']'){
                if(stack[top] == 2 && top > -1){
                    stack[top] = 0;
                    top--;
                }
                else {
                    printf("No\n");
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0 && top == -1){
            printf("Yes\n");
        }
        else if(flag == 0 && top > -1){
            printf("No\n");
        }

    }
    return 0;
}
