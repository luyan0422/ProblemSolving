#include<stdio.h>
#include<math.h>

int main(){
    int num;
    while(1){
        scanf("%d", &num);
        if(0 == num) break;
        int a = 0;     //買賣數量
        int total = 0; //計算步數
        int sum = 0;   //計算收支平衡

        for(int i = 1; i <= num; i++){
            scanf("%d", &a);
            sum += a;
            if(sum != 0){
                total += abs(sum);
            } 
        }
        
        printf("%d\n",total);
    }
    return 0;
}
