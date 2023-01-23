#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int months = 12;
    int a[months];
    for (int i = 0; i < months; i++)
    {
        cin >> a[i];
    }
    sort(a, a + months);
    int totalGrowth = 0, output = 0;
    while (totalGrowth < k && output < months)
    {
        output++;
        totalGrowth += a[months - output];
    }
    if (totalGrowth < k)
        output = -1;
    cout << output;
    return 0;
}