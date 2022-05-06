//好像有點冗長
#include<stdio.h>

int countNumber(int i){
    int count = 1;
    while(i != 1){
        if(i % 2 == 0){
            i = i / 2;
            count++;
        }
        else{
            i = 3 * i + 1;
            count++;
        }
    }
    return count;
}

void swap(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main(){
    int i = 0, j = 0;
    while(scanf("%d %d",&i, &j) != EOF){
        printf("%d %d ",i ,j);//先印防止後續交換
        if(i >= j){
            swap(&i, &j);
        }//如果不是按照大小排序 先交換
        int max= 0;  //因為max每次都要重置，所以設在while迴圈裡面
        for (int k = i; k <= j; k++)
        {
            if(countNumber(k) > max){
                max = countNumber(k);
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
