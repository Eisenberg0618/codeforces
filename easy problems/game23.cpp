#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (m % n > 0)
    {
        cout << -1;
        return 0;
    }
    int d = m / n;
    int count = 0;
    while (d % 2 == 0)
    {
        d = d / 2;
        ++count;
    }
    while (d % 3 == 0)
    {
        d = d / 3;
        ++count;
    }
    cout << (d == 1) ? count : -1;
    return 0;
}