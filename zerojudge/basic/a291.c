#include<stdio.h>
int main(){
    int ans[4] = {0};
    while(scanf("%d %d %d %d", &ans[0], &ans[1], &ans[2], &ans[3]) != EOF){
        int num;
        int input[4] = {0};
        
        scanf("%d", &num);

        for(int i = 0; i < num; i++){
            int flagAns[4] = {0};
            int flagInput[4] = {0};
            int A= 0, B= 0; //紀錄幾Ａ幾Ｂ

            for(int j = 0; j < 4; j++){
                scanf("%d", &input[j]);
            } //掃描答案

            for(int j = 0; j < 4; j++){
                if(ans[j] == input[j]){
                    flagAns[j] = 1;
                    flagInput[j] = 1;
                    A++;
                }
            }

            for(int j = 0; j < 4; j++){  
                if( flagAns[j] == 0){
                    for(int k = 0; k < 4; k++){
                        if( flagInput[k] == 0){
                            if(ans[j] == input[k]){
                                B++;
                                flagAns[j] = 2;
                                flagInput[k] = 2;
                                break;
                            }
                        }
                    }
                }   
            }
            printf("%dA%dB\n",A, B);
        }
    }
    return 0;
}
