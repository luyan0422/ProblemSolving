#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

const int MAX = 47000; 

int main(){
    vector<bool>check(MAX + 1, true);
    vector<int> primes;

    check[0] = false;
    check[1] = false;
    for( int i = 2 ; i <= MAX ; i++ ){
        if(check[i] ){
            for( int j = i + i ; j <= MAX ; j += i ){
                check[j] = false;
            }
            if( check[i] ){
                primes.push_back(i);
            }
        }
    }
    
    int num;
    while(1){
        scanf("%d", &num);
        if(num == 0) break;
        printf("%d = ",num);
        if(num < 0) { 
            num *= -1;
            printf("-1 x ");
        }
            
        while(num != 1 && num != 0){
            int i = 0;
            for(i = 0; i < primes.size() && (num % primes[i] != 0); i++);
            if(i == primes.size()) {
                printf("%d\n", num);
                break;
            }
            num = num / primes[i];
            if(num == 1){
                printf("%d\n", primes[i]);
                break;
            }
            else printf("%d x ", primes[i]);
        }
    }
    return 0;
}
