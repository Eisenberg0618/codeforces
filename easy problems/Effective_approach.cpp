#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n(0);
    cin >> n;
    long *position = new long[n + 1];
    long temp(0);
    for (int i = 1; i <= n; i++)
    {
        position[temp] = i;
    }
    long m(0);
    cin >> m;
    long long v(0), p(0);
    while (m--)
    {
        cin >> temp;
        v += position[temp];
        p += n + 1 - position[temp];
    }
    cout << v << " " << p;
    return 0;
}