#include <iostream>
 
using namespace std;
 
int main(){
    const string password = " ";
    string userpassword;
    int count=0;
 
    again:
    cin >> userpassword;
 
    while(userpassword!=password){
        count++;
        cout << "no\n";
    }
        if(count >= 8)
            cout << "yes\n";
        goto again;
    
    
}
