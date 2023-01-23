#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
            res++;
    }
    if (res == 4 || res == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}