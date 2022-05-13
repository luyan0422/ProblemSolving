#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 18409205
bool isPrime[MAX];


int main(){
    memset(isPrime, 0, MAX * sizeof(bool));
    isPrime[0] = 1;
    isPrime[1] = 1;

    for(int i = 2; i < MAX; i++){
        if(!(isPrime[i])){
            for(int j = i * 2; j < MAX; j += i){
                isPrime[j] = 1;
            }
        }
    }
    int record[100001];
    int k = 0;
    for(int i = 2; i < MAX; i++){
        if(!(isPrime[i] || isPrime[i - 2])){
            record[k] = i - 2;
            k++;
        }
    }


    int num;
    while(scanf("%d", &num) != EOF){
        printf("(%d, %d)\n", record[num - 1], record[num - 1] + 2);
    }

    return 0;
}
