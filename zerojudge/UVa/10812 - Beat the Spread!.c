#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        int s, d, temp;
        scanf("%d %d", &s, &d);
        if(s < d || (s + d) % 2 != 0){
            printf("impossible\n");
        }
        else{
            s = (s + d) / 2;
            d = s - d;
            printf("%d %d\n", s, d);
        }
    }
    return 0;
}
