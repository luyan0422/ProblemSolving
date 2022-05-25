#include<stdio.h>

int main(){
    int a[45] = {1,2,3};
    for(int i = 3; i < 45; i++){
        a[i] = a[i - 1] + a[i - 2];
    } //build an fibnacci array

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int number;
        scanf("%d", &number);
        printf("%d = ", number);
        int flag = 0;
        for(int i = 44; i > -1; i--){
            if(a[i] <= number){
                printf("1");
                number -= a[i];
                flag = 1;
            }
            else if(a[i] > number && flag == 1){
                printf("0");
            } 
        }
        printf(" (fib)\n");
    }
    return 0;
}
