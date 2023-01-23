#include <bits/stdc++.h>
// #include<cctype>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int lower_case = 0, upper_case = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
            lower_case++;
    }
    int (*conversionfunction)(int);
    if (lower_case >= 1.0 * s.size() / 2)
        conversionfunction = tolower;
    else
        conversionfunction = toupper;
    for (int i = 0; i < s.size(); i++)
        s[i] = conversionfunction(s[i]);
    cout << s;
    return 0;
}