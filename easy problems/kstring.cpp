#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    string output = "";
    char temp;
    int size = 26;
    int letters[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        letters[s[i] - 'a']++;
    }
    for (int i = 0; i < size; i++)
    {
        if (letters[i] == 0)
            continue;
        else if (!(letters[i] % k))
        {
            for (int j = 0; j < letters[i] / k; j++)
            {
                output += 'a' + i;
            }
        }
        else
        {
            output = "-1";
            break;
        }
    }
    if (output == "-1")
        cout << output << endl;
    else
    {
        for (int i = 0; i < k; i++)
            cout << output;
    }
    return 0;
}