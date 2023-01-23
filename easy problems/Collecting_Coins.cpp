#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        n = n - (2 * c - b - a);
        if (n < 0 || n % 3 != 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}