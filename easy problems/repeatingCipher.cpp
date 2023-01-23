#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0, r = 0;
    string t = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (r == 0)
        {
            t += s[i];
            r = count++;
        }
        else
            r--;
    }
    cout << t;
    return 0;
}