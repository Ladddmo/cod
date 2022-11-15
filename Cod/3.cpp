
#include <string>
#include <iostream>
using namespace std;
int main() {
	string s;
    getline(cin, s);
	string m;
	getline(cin, m);
    size_t pos = s.find(m);
    if (pos != string::npos){
        cout << "Found " << "\n";
    }
    else{

    size_t pos = m.find(s);
    if (pos != string::npos){
        cout << "Found " << "\n";
    }
        else{
		
        cout << "Not found\n";
    }
    }
}
