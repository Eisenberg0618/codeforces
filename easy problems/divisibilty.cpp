#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long res = 0;
        if (a % b == 0)
            cout << res << endl;
        else
            cout << b - a % b << endl;
    }
    return 0;
}