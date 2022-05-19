#include<stdio.h>

int main(){
    int a, num;
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        scanf("%d", &a);
        int count = 0;
        int temp = a;
        while(temp != 0){
            temp /= 10;
            count++;
        } //計算位數
        
        int ans = 0;
        for(int j = a; j > a - 10 * count; j--){
            int temp3 = j;
            int caculate  = 0;
            while(temp3 != 0){
                caculate += temp3 % 10;
                temp3 /= 10;
            }
            
            if(caculate + j == a){
                ans = j;
            }
        }

        printf("%d\n",ans);
    }
    return 0;
}
