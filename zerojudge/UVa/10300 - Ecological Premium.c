#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        int f;
        scanf("%d", &f);
        long long int ans = 0;
        for(int j = 0; j < f; j++){
            long long int a, b, c;
            scanf("%lld %lld %lld", &a, &b, &c);
            ans += a * c;
        }
        printf("%lld\n", ans);
    }
    return 0;
}
