#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int res = n % 2 + n / 2;
        cout << res << endl;
    }
    return 0;
}