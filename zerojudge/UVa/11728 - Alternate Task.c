#include<stdio.h>

int main(){
    int s;
    int c = 1;
    while(1){
        scanf("%d", &s); //求某數Ｘ 因數總合加起來要等於Ｓ
        if(s == 0) break;
        int num = -1;
        if(s == 1)
        num = 1;
        for(int i = s - 1; i > 0; i--){//從最大的數數下來
            int sum = 0;
            for(int j = 1; j * j <= i && sum <= s; j++){
                if(i % j == 0){
                    sum += j;
                    if(j * j != i){ //平方根的話只要加一次
                        sum += i / j;//一對的話要加兩個數
                    }
                }
            }
            if(sum == s && i > num){
                num = i;
                break;
            }
        }
        printf("Case %d: %d\n", c, num);
        c++;
    }
}
