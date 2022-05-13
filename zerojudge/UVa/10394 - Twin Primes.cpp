#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

const int MAX = 2000000;

int main(){
    vector<int> twoPrime;
    vector<bool> isPrime(MAX, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for(int i = 2; i < MAX; i++){
        if(isPrime[i]){
            for(int j = i * 2; j < MAX; j +=i){
                isPrime[j] = false;
            }
        }
        if(isPrime[i] && isPrime[i-2]){
            twoPrime.push_back(i-2);
        }
    }

    int num;
    while( scanf("%d", &num) != EOF ){
        printf("(%d, %d)\n", twoPrime[num-  1], twoPrime[num - 1] + 2);
    }

  return 0;
}
