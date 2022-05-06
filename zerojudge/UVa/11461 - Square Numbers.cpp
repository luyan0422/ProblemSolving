#include<iostream>
using namespace std;

int main(){
    int from = 0, end = 0;
    while(1){
        int j,count = 0;
        cin >> from >> end;
        if(from == 0 && end ==0){
            break;
        }
        for(j = 1; j * j < from; j++);
        for(; j * j <= end ; j++){
            count++;
        } 
        cout << count << endl;
    }
    return 0;
}
