#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve()
{

    ll n;
    cin >> n;
    if (n % 2 || n  < 4)
    {
        cout << -1 << endl;
        return;
    }
    ll mini, maxi;
    maxi = (n / 4LL);
    mini = (n / 6LL) + (n % 6 ? 1LL : 0LL);
    cout << mini << " " << maxi << endl;
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}