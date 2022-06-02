#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> a(2000001);
    int n;
    while(1){
        cin >> n;
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.begin() + n);
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
