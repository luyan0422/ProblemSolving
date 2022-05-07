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
    
    while(1){
        stack<int> temp; //create a stack name temp
        int k;   //k for輸入項 
        int point = 1; //point for 準備要進入stack的數字
        int top = 0; //紀錄top在第幾個

        for(int i = 0; i < len; i++){
            cin >> k;   //題目測資輸入
            if(k == 0){
                return; //如果測到零 代表測資結束
            }
            else{
                for(int i = point; i <= k; i++){
                    temp.push(i); //小於等於數列數字的數push進去
                    point++;
                    top++;
                }
            }
            temp.pop();
            top--;
        }

        if(temp.empty()){
            cout << "Yes\n";
        }
        else cout << "No\n";
    }
}
