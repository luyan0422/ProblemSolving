#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;


int main(){
    string n;
    while(getline(cin, n)){
        int count = 0;
        
        for(int i = 1; i < n.length(); i++){
            if((!isalpha(n[i])) && isalpha(n[i-1])){
                count++;
            }
        }
        if(isalpha(n[n.length() - 1])){
            count++;
        }
        cout << count  << "\n";

    }
}
