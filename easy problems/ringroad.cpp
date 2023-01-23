#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    long current(0), last(1);
    long long total(0);
    for (int i = 0; i < m; i++)
    {
        cin >> current;
        total += current - last;
        if (current < last)
            total += n;
        last = current;
    }
    cout << total;
    return 0;
}