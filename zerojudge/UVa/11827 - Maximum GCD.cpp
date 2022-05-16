#include<iostream>
#include<sstream>
using namespace std;
void FIND();
int GCD(int i, int j);  //輾轉相除法求最大公因數

int main(){
    int N;
    scanf("%d",&N);
    getchar();  //第一行後面的換行要先解決 不然會錯誤
    for(int i = 1; i <= N; i++){
        FIND();
    }
    return 0;
}

void FIND(){
    stringstream stream;  //宣告一個串流
    string s;
    int a[120] = {0};
    int number, i = 0, maxgcd = 0;
    getline(cin, s);  //讀取一整行
    stream << s;   //把s寫入stream
    while(stream >> number){ //string 轉成 int
        a[i] = number;
        i++;
    }
    for(int m = 0; m < i; m++){
        for(int k = 0; k < i; k++){
            if(m == k) continue;
            int temp = GCD(a[m], a[k]);
            if(temp > maxgcd){
                maxgcd = temp;
            }
        }
    }
    cout << maxgcd << "\n";
} 

int GCD(int i, int j){
    if(i < j){
        return GCD(j, i);
    }
    else{
        if(i % j == 0){
            return j;
        }
        else return GCD(j, i % j);
    }
}
