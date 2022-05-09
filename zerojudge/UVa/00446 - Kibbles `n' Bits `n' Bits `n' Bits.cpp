#include <iostream>
using namespace std;

void d2b(int num); //十進位轉二進位

int main(){
    int count = 0;
    cin >> count; //算式數量
    for(int i = 1; i <= count; i++){
        char op;
        int num1 = 0, num2 =0;
        cin >> hex >> num1 >> op >> hex >> num2; //掃描輸入的字
    
        switch (op){
            case '+':
                d2b(num1);
                cout << " + ";
                d2b(num2);
                cout << " = ";
                cout << num1 + num2 << "\n";
            break;

            case '-':
                d2b(num1);
                cout << " - ";
                d2b(num2);
                cout << " = ";
                cout << num1 - num2 << "\n";
            break;
        }

    }
    return 0;
}

void d2b(int num){
    int length = 0;
    int a[13] = {0};

    while(num != 0){
        a[length] = num % 2;
        num /= 2;
        length++;
    }
    for(int i = 12; i >= 0; i--){
        cout << a[i];
    }
}



