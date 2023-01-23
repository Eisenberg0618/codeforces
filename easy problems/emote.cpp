#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n);
    for (long i = 0; i < n; i++)
        cin >> a[i];
    sort(a.rbegin(), a.rend());
    long long total = m / (k + 1) * (k * a[0] + a[1]) + m % (k + 1) * a[0];
    cout << total;
    return 0;
}