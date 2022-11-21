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
        vector<int> v(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        c.assign(v.begin(), v.end());
        sort(c.begin(), c.end());
        for (auto val : v)
        {
            int end = c.size() - 1;
            if (val == c[end])
            {
                end--;
            }
            cout << val - c[end] << " ";
        }
        c.clear();
        cout << endl;
    }
    return 0;
}