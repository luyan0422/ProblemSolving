#include<stdio.h>

int main(){
    int m;
    while(1){
        scanf("%d",&m);
        if(m == 0)  break;
        int sum = 0;
        for(int i = m; i > 0; i--){
            sum += i * i;
        }
        printf("%d\n",sum);
    }
}
