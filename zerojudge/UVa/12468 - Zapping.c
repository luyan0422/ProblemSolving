#include<stdio.h>
void count(int a, int b);

int main(){
    int a, b;
    while(scanf("%d %d", &a, &b)){
        if(a == -1 && b == -1)
            break;
        count(a,b);
    }
}

void count(int a, int b){
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }

    if((b - a) >= 50){
        printf("%d\n", 99 - b + a + 1);
    }
    else printf("%d\n", b - a);
}
