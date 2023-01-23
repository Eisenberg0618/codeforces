#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] - 'a' < s[i + 1] - 'a')
        {
            swap(s[i], s[i + 1]);
            if (s[i] == '+')
                continue;
        }
    }
    cout << s;
    return 0;
}