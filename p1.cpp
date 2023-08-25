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
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int res;
        int low = 1, high = min(n, 2648956421);
        while (low <= high)
        {
            int mid = (low + high) / 2;
            res = mid * (mid - 1) / 2;
            if (res <= n)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (res == n)
        {
            cout << high << endl;
        }
        else
        {
            int temp = high * (high - 1) / 2;
            temp = n - temp;
            cout << temp + high << endl;
        }
    }
    return 0;
}