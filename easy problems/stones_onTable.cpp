#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    int total = 0, idx = 0;
    char state = s[0];
    while (++idx < n)
    {
        if (s[idx] == state)
            ++total;
        else
            state = s[idx];
    }
    cout << total << endl;
    return 0;
}