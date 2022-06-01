#include<stdio.h>
int main(){
    long long int arr[50] = {1, 2, 3};
    for(int i = 3; i < 50; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    int n;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        printf("%lld\n", arr[n - 1]);
    }
    return 0;
}
