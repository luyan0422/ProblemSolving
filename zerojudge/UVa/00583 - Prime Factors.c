#include<stdio.h>
#define max 47000
#define Prime 5000
int main(){
    int check[max] = {0};
    check[0] = 1;
    check[1] = 1;
    for(int i = 2; i < max; i++){
        if(check[i] == 0){
            for(int j = i + i; j < max; j += i){
                check[j] = 1;
            }
        }
    }
    int k = 0;
    int isPrime[Prime] = {0};
    for(int i = 2; i < max; i++){
        if(check[i] == 0){
            isPrime[k] = i;
            k++;
        }
    }
    int num;
    while(1){
        scanf("%d", &num);
        if(num == 0) break;
        printf("%d = ",num);
        if(num < 0) {
            num /= -1;
            printf("-1 x ");
        }
        
        while(num != 1){
            int i = 0;
            for(i = 0; i < k && (num % isPrime[i] != 0); i++);
            if(i == k){
                printf("%d\n", num);
                break;
            }
            num = num / isPrime[i];
            if(num == 1){
                printf("%d\n", isPrime[i]);
                break;
            }
            else printf("%d x ", isPrime[i]);
        }
    }
    return 0;
}
