#include <bits/stdc++.h>
using namespace std;
int main()
{
    int64_t n, k;
    cin >> n >> k;
    cout << ((k <= (n + 1) / 2) ? (2 * k - 1) : (2 * (k - (n + 1) / 2)));
    return 0;
}