#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int i = 1;
    while(1){
        getline(cin, str);
        if(str[0] == '#') break;
        
        if(str.compare("HELLO") == 0)
            cout << "Case " << i << ": ENGLISH\n";
        else if(str.compare("HOLA") == 0)
            cout << "Case " << i << ": SPANISH\n";
        else if(str.compare("HALLO") == 0)
            cout << "Case " << i << ": GERMAN\n";
        else if(str.compare("BONJOUR") == 0)
            cout << "Case " << i << ": FRENCH\n";
        else if(str.compare("CIAO") == 0)
            cout << "Case " << i << ": ITALIAN\n";
        else if(str.compare("ZDRAVSTVUJTE") == 0)
            cout << "Case " << i << ": RUSSIAN\n";
        else 
            cout << "Case " << i << ": UNKNOWN\n";
        i++;      
    }
    return 0;
}
