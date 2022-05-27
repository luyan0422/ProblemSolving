#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        char str[10][100];
        int score[10] = {0};
    
        for(int j = 0; j < 10; j++){
            scanf("%s", &str[j]);
            scanf("%d", &score[j]);
        }

        int max = score[0];
        for(int k = 0; k < 10; k++){
            if(score[k] >= max){
                max = score[k];
            }
        }
        printf("Case #%d:\n",i);
        for(int k = 0; k < 10; k++){
            if(score[k] == max){
                printf("%s\n", str[k]);
            }
        }

    }
    return 0;
}
