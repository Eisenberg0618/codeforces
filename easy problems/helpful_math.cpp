#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] - '0' < s[s.size()])
            swap(s[i], s[s.size()]);
    }
    cout << s;
    return 0;
}