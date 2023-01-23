#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    int count = 0;
    while (n >= 0)
    {
        getline(cin, s);
        if (s.size() <= 10)
            cout << s << "\n";
        else
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
        n--;
    }
    return 0;
}