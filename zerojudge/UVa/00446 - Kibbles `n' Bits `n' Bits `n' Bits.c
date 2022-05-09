#include <stdio.h>

void d2b(int num); //十進位轉二進位

int main(){
    int count = 0;
    scanf("%d", &count); //算式數量
    for(int i = 1; i <= count; i++){
        char op;
        int num1 = 0, num2 =0;
        scanf("%x %c %x", &num1, &op, &num2); //掃描輸入的字
    
        switch (op){
            case '+':
                d2b(num1);
                printf(" + ");
                d2b(num2);
                printf(" = ");
                printf("%d\n", num1 + num2);
            break;

            case '-':
                d2b(num1);
                printf(" - ");
                d2b(num2);
                printf(" = ");
                printf("%d\n", num1 - num2);
            break;
        }

    }
    return 0;
}

void d2b(int num){
    int length = 0;
    int a[13] = {0};

    while(num != 0){
        a[length] = num % 2;
        num /= 2;
        length++;
    }
    for(int i = 12; i >= 0; i--){
        printf("%d",a[i]);
    }
}
