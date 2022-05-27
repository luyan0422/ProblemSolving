#include<stdio.h>
#define result(m, n) m * n - 1
int main(){
    int m, n;
    while(scanf("%d %d", &m, &n) != EOF){
        printf("%d\n", result(m, n));
    }
    return 0;
}
