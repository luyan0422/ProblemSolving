#include<stdio.h>
#include<string.h>
void test(int a[]);

int main(){
    int N;
    scanf("%d", &N);   //決定有幾行
    for(int i = 1; i <= N; i++){
        int a[4];
        for(int j = 0; j < 4; j++){
            scanf("%d",&a[j]);
        }
        test(a);
    }
}

void test(int a[]){
    int odd = 0, even = 0; 
    for(int i = 0; i < 4; i++){
        int num1 = a[i] / 1000; //千位數
        int num2 = (a[i] / 100) % 10; //百位數
        int num3 = (a[i] / 10) % 10;   //個位數
        int num4 = a[i] % 10;       //十位數

        num1 *= 2;
        num3 *= 2;
        num1 = (num1 / 10) + (num1 % 10);
        num3 = (num3 / 10) + (num3 % 10);

        even += num2 + num4;
        odd += num1 + num3;
    }

    if((even + odd) % 10 == 0){
        printf("Valid\n");
    }
    else printf("Invalid\n");
}
