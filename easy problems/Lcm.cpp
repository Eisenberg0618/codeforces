#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return (b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << lcm(l, r);
    }
    return 0;
}
