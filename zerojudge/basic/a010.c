//因數分解
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int element(int a)
{
    for(int i = 2; i <= a; i++){
        if(a % i == 0){
            return(i);
            break;
        }
    }
}

int main()
{
    int num = 0;    //欲分解的數
    int *ary = 0;   //pointer to 因數陣列
    int *count = 0;     //紀錄因數次數
    int length = 0; //陣列長度
    scanf("%d",&num);
    while(num != 1)
    {
       if(length == 0 || (element(num) != ary[length-1]))
       {
            ary = (int*)realloc(ary, sizeof(int) * (length + 1));
            count = (int*)realloc(count, sizeof(int) * (length + 1));
            ary[length] = element(num);
            count[length] = 1;
            length ++;
       }
       else 
        {
            count[length-1] ++;
        }
        num = num / element(num);
    }


    for(int i = 0; i <length; i++)
    {
        printf("%d", ary[i]);
        if(count[i] > 1 )
        {
            printf("^%d",count[i]);
        }
        if(count[i] = 1 && i != (length - 1)) printf(" * ");
    }
}
