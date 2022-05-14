#include<stdio.h>
int main(){
    int num;
    while(scanf("%d",&num) != EOF){
        if(num == 0) break;
        
        int count = 0, temp = 0;//count for 2進制轉換 temp計算1的數量
        int a[32] = {0};

        while(num != 0){
            a[count] = num % 2;
            if(a[count] == 1) temp++;
            num /= 2;
            count++;
        }
        printf("The parity of ");

        for(int i = count - 1; i >= 0; i--){
            printf("%d",a[i]);
        }
        printf(" is %d (mod 2).\n", temp);
    }
    return 0;
}
