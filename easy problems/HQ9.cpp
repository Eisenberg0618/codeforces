#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            flag = true;
            break;
        }
    }
    if (flag == false)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}