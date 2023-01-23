#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> ans;
        int power = 1;
        cin >> n;
        while (n > 0)
        {
            if (n % 10 > 0)
            {
                ans.push_back((n % 10) * power);
            }
            n /= 10;
            power *= 10;
        }
        cout << ans.size() << endl;
        for (auto num : ans)
            cout << num << endl;
    }
    return 0;
}