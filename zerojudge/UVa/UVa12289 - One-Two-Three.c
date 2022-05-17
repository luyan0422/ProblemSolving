#include<stdio.h>
#include<string.h>

int main(){
    int num;
    scanf("%d, &num");
    char a[6];

    while(scanf("%s", a) != EOF){
        int ans = 0;
        int k = strlen(a);
        if(k > 3){
            printf("3\n");
        }
        else if((a[0] == 111 && a[1] == 110) || (a[0] == 111 && a[2] == 101)
                ||(a[1] == 110 && a[2] == 101)){
            ans = 1;
            printf("1\n");
        }
        else {
            printf("2\n");
        }
        
    }
    return 0;
}
