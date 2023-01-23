#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int absDiff(abs(a[0] - a[n - 1])), index(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) < absDiff)
        {
            absDiff = abs(a[i] - a[i + 1]);
            index = i;
        }
    }
    cout << 1 + index << " " << 1 + (index + 1) % n;
    return 0;
}