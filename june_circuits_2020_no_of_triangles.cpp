#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
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
        int n, b1, b2;
        cin >> n >> b1 >> b2;
        if (n == 5)
        {
            cout << 1 << "\n";
            continue;
        }
        n = n - 2;
        if (abs(b1 - b2) == 1 || abs(b1 - b2) == (n + 1))
        {
            cout << (n + (n - 1) * (n - 4)) << "\n";
            continue;
        }
        else
        {
            cout << (n + (n - 2) * (n - 4)) << "\n";
            continue;
        }
    }
}
