#include <bits/stdc++.h>
 
using namespace std;
 
void solution() {
    int n, x;
    cin >> n >> x;
    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    bool check = true;
    for (int i = 0; i < n; ++i)
        if (a[n + i] - a[i] < x) 
        {
            check= false;
        }
    cout << (check ? "YES" : "NO") << "\n";
}
 
int main() {
    int t; cin >> t;
    while (t--) 
    {
        solution();
    }
}