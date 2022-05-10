#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    char num[8];
    num[8] = '\0';
    int a = 0, b= 0; // a 為轉換前基底 b為轉換後基底

    while(cin >> num >> a >> b){
        int j = -1, k = -1, count = 0; //count為一次轉換後的數字
        for(int i = 0; i < 7 && num[i] != '\0'; i++){
            k++;
        } // 判斷有幾位輸入數字

        for(int i = 0; i <= k - 1 ; i++){ 
            count = ( count + (num[i] > 64 ? num[i] - 55 : num[i] - 48)) * a;
        }
        count += (num[k] > 64 ? num[k] - 55 : num[k] - 48);

        for(int i = 0; i < 7 && count != 0; i++){
            num[i] = (count % b) > 9 ? (count % b) + 55 : (count % b) + 48;
            count = count / b;
            j++;
        } //轉換後存入

        if(count != 0) {
            cout << "ERROR";
        }
        else{
            for(int i = 6; i >= 0; i--){
                if(i > j) cout << " ";
                else cout << num[i];
            }
        }  
        cout << "\n";      
    } 
    return 0;
    
}


        /*for(int i = k; i >= 0; i--){ 
            count += 
                pow(a, k - i) * (num[i] > 64 ? num[i] - 55 : num[i] - 48);
        }

      
    return 0;
}*/.  //可以更換成上面的解法 就不用呼叫次方函式 1234 = ((1 * 10) + 2) * 10 + 3)*10 + 4


