#include <bits/stdc++.h>
using namespace std;
#define ASCII 256
int main()
{
    string s1;
    getline(cin, s1);
    string s2;
    getline(cin, s2);
    int output = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (tolower(s1[i]) < tolower(s2[i]))
        {
            output = -1;
            break;
        }
        if (tolower(s1[i]) > tolower(s2[i]))
        {
            output = 1;
            break;
        }
    }
    cout << output;
    return 0;
}