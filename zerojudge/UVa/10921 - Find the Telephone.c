#include<stdio.h>

int main(){
    char dic[26] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5,
                    5, 5, 6, 6, 6, 7, 7, 7, 7, 8,
                    8, 8, 9, 9, 9, 9};
    char s[30] = {0};
    while(scanf("%s", s) != EOF){
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i]>= 65 && s[i] <= 90){
                printf("%d",dic[s[i] - 65]);
            }
            else printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
