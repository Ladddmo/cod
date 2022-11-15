#include <iostream>
using namespace std;
int main()
{
    char str[1001];
    cin.getline(str,1001);
 
    int x = strlen(str);
    if (x % 2 != 0)
    {
 
        int x1 = x - 1;
        int y = x1 / 2;
 
        char str1[500] = { 0 }, str2[500] = { 0 };
        for (int i = 0; i < y; i++)
        {
            str1[i] = str[i];
            str2[i] = str[x1-i-1];
        }
        cout << str1 << endl << str2<<endl;
        if ( strcmp(str1, str2)==0) 
            cout << "YES\n";
        else
            cout << "NO\n";
    }else
        cout << "NO\n";
    system("pause");
    return 0;
}