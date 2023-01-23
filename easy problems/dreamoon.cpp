#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int minSteps = n / 2 + n % 2;
    if (n < m)
        cout << -1;
    else
        cout << m * ((minSteps / m) + (minSteps % m > 0));

    return 0;
}
