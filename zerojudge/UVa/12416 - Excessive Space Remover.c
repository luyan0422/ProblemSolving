#include <stdio.h>
int main(){
    char a;
    int max = 0;
    int count = 0;
    while(scanf("%c", &a) != EOF){
        if(a != '\n'){
            if(a == ' '){
                count++;
            }
            else{
                if(count > max){
                    max = count;
                }
                count = 0;
            }
        }
        else{
            int d = (max % 2 == 0 || max == 1) ? 0 : 1;
            while(max > 1){
                max /= 2;
                d++;
            }
            printf("%d\n", d);
            max = 0;
        }
    }
    int d = (max % 2 == 0 || max == 1) ? 0 : 1;
    while(max > 1){
        max /= 2;
        d++;
    }
    printf("%d\n", d);
    return 0;
}
