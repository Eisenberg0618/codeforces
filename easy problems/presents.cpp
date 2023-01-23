#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int temp = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        a[temp] = i;
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}