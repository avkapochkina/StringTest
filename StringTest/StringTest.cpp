#include <iostream>
using namespace std;

int main ()
{
    string s;
    cin >> s;
    for(auto i = s.begin(); i != s.end(); i++)
    {
        if(count(s.begin(), s.end(), *i) == 1)
            cout << '(';
        else cout << ')';
    }
    return 0;
}