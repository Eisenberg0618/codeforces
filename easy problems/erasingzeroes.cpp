#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    while (n--)
    {
        int last = -1, count = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                continue;
            if (last >= 0)
                count += (i - last - 1);
            last = i;
        }
        cout << count << endl;
    }
    return 0;
}