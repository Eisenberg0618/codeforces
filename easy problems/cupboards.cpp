#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int left(0), right(0), lsum(0), rsum(0);
    for (int i = 0; i < n; i++)
    {
        cin >> left >> right;
        lsum += left;
        rsum += right;
    }
    int total = 0;
    total += (lsum <= n / 2) ? lsum : (n - lsum);
    total += (rsum <= n / 2) ? rsum : (n - rsum);
    cout << total;
    return 0;
}