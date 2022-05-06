#include<stdio.h>
void countpage(int num){
    int sum = 0, page = 0;
    for(int i = 0; i <= num + 1; i++){
        sum += i;
        if(sum > num){      //頁數連加一超過題目給的總和
            page = sum - num;   //少加的那一頁
            printf("%d %d\n",page,i); //印出結果
            break;
        }
    }
}

int main(){
    int num = 0;
    while(1){
        scanf("%d", &num);
        if(num == 0) break;
        countpage(num);
    }
    return 0;
}
