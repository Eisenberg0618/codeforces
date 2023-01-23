#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int ratio = 0, maxration = -1, output = 0, stopQ = n - 1;
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = 0; j <= stopQ; j++)
        {
            if (b[i] % a[j] == 0)
            {
                ratio = b[i] / a[j];
                if (ratio > maxration)
                {
                    maxration = ratio;
                    output = 1;
                }
                else if (ratio == maxration)
                {
                    output++;
                }
                stopQ = j;
                break;
            }
        }
    }
    cout << output;
    return 0;
}