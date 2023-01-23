#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string output = "YES";
    int idx = 0;
    int n = s.size();
    while (idx < n)
    {
        if (s[idx] != '1')
        {
            output = "NO";
            break;
        }
        else
        {
            if (idx < n - 2 && s[idx + 1] == '4' && s[idx + 2] == '4')
                idx += 3;
            else if (idx < n - 1 && s[idx + 1] == '4')
                idx += 2;
            else
                idx++;
        }
    }
    cout << output << endl;
    return 0;
}