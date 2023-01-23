#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long *a = new long[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long min = 10000000001;
    long pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            pos = i + 1;
        }
        else if (a[i] == min)
        {
            pos = -1;
        }
    }
    if (pos == -1)
        cout << "Still Rozdil";
    else
        cout << pos;
    return 0;
}