#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define REP(i, a, b) \
    for (int i = int(a); i <= int(b); i++)
#define TRvi(c, it) \
    for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
    for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
    for (msi::iterator it = (c).begin(); it != (c).end(); it++)

int main()
{
    fast() int t;
    cin >> t;
    while (t--)
    {
        vector<ll> v;
        int set_bit[32] = {0};
        int n, l;
        cin >> n >> l;
        ll a[n];
        REP(i, 0, n - 1)
        {
            cin >> a[i];
        }
        REP(i, 0, n - 1)
        {
            int j = 0;
            while (a[i])
            {
                if (a[i] & 1)
                {
                    set_bit[j]++;
                }
                j++;
                a[i] = a[i] / 2;
            }
        }
        REP(i, 0, 31)
        {
            if (set_bit[i])
            {
                v.push_back(set_bit[i] * (1 << i));
            }
        }
        sort(v.begin(), v.end(), greater<ll>());
        ll count = 1;
        REP(i, l - 1, v.size() - 1)
        {
            if (v[i] == v[i + 1])
                count++;
            else
                break;
        }
        cout << count << "\n";
    }
}
