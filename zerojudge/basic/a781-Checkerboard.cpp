#include <iostream>
using namespace std;
void draw(int size);

int main(){
    int size = 0;
    while(cin >> size){
        if(size == 0) break;
        draw(size);
        cout << "\n";
    }
    return 0;
}

void draw(int size){
    for(int i = 1; i <= 8; i++){
        for(int m = 1; m <= size; m++){
            for(int j = 1; j <= 8 ; j++){
                for(int k = 1; k <= size; k++){
                    if((i + j) % 2 ==0)
                        cout << "#";
                    else cout << ".";
                }
            }
            cout << "\n";
        }
    }
}
