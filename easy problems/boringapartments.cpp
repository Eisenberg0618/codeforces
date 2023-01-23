#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    while (n > 0)
    {
        cin >> s;
        int len = s.size();
        int digi = s[0] - '0' - 1;
        cout << digi * 10 + len * (len + 1) / 2 << endl;
        n--;
    }
    return 0;
}