#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin >> t;
 
    while (t--)
    {
 
        int n, m;
        cin >> n >> m;
 
        string a, b;
        cin >> a >> b;
 
        for (int i = 0; i < n; i++)
        {
            if (a.size() < 2)
                break;
 
            else if (a == b)
                break;
 
            else
            {
                if (a[1] == b[0])
                {
                    if (a[0] <= a[1])
                    {
                        a[1] = max(a[0], a[1]);
                        a.replace(0, 1, "");
                    }
 
                    else
                    {
                        a[1] = min(a[0], a[1]);
                        a.replace(0, 1, "");
                    }
                }
 
                else
                {
                    if (a[0] <= a[1])
                    {
                        a[1] = min(a[0], a[1]);
                        a.replace(0, 1, "");
                    }
 
                    else
                    {
                        a[1] = max(a[0], a[1]);
                        a.replace(0, 1, "");
                    }
                }
            }
        }
 
        if (a == b)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}
 
int main()
{
    solve();
}