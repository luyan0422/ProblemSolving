#include<iostream>
#include<stack>
using namespace std;
void test(int len);

int main(){
    int len;
    while(1){
        cin >> len;
        if(len == 0) break; //如果第一行是零直接跳出
        else test(len);
    }
}

void test(int len){
    stack<int> temp;
    int input[len]; //放題目測資
    int k;
    while(1){
        for(int i = 0; i < len; i++){
            cin >> k;
            if(k == 0) return;
            input[i] = k; //題目測資輸入
        }
        for(int i = 1; i <= len; i++){
            for(int j = 1; j <= len; j++){
                if(j <= input[i - 1]){
                    temp.push(j);
                }
            }
        }
    }
}
