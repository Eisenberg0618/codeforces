#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << 4 * (sqrt(x * y / z) + sqrt(x * z / y) + sqrt(z * y / x));
    return 0;
}