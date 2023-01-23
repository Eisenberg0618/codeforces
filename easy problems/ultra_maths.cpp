#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n, m;
    getline(cin, n);
    getline(cin, m);
    for (int i = 0; i < n.size(); i++)
    {
        cout << ((n[i] - '0') ^ (m[i] - '0'));
    }
    return 0;
}