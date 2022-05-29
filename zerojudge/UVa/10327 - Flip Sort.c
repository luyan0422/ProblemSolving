#include<stdio.h>
#define swap(a, b) a = a ^ b, b = a ^ b, a = a ^ b

void flipSort(int num);

int main(){
    int num;
    while(scanf("%d", &num) != EOF){
        flipSort(num);
    }
    return 0;
}

void flipSort(int num){
    int arr[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }  //scan the input

    //do bubble sort and calculate the total change
    int count = 0;
    for(int i = num - 1; i > 0; i--){
        int flag = 0;
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                count ++;
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
    printf("Minimum exchange operations : %d\n", count);
}
