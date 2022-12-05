#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for (char val : s)
        {
            ans = max(ans, (val - 'a' + 1));
        }
        cout << ans << endl;
    }
    return 0;
}