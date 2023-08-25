// Ｉ＇ｍ Ｖｅｎｇｅａｎｃｅ

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) (x).begin(), (x).end()
#define allg(x) (x).begin(), (x).end(), greater<>()



signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //=============================================
    vector<int> v = {8, 2, 9, 12, 45, 1, 3, 4, 2, 7};
    recursivebubblesort(v);
    for (auto i : v)
    {
        cout << i << ' ';
    }
    return 0;
}