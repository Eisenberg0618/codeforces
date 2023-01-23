#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x, last = 0, best = 0, current = 0;
    while (n--)
    {
        cin >> x;
        if (x > last)
            current++;
        else
            current = 1;
        last = x;
        best = (current > best) ? current : best;
    }
    cout << best;
    return 0;
}