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

int bubble_sort(int arr[], int n)
{
    int count = 0;
    bool swap = true;
    while (swap != false)
    {
        swap = false;
        count = count + 1;
        REP(i, 0, n - 1)
        {
            if (arr[i] > arr[i + 1])
            {
                arr[i] = arr[i] ^ arr[i + 1];
                arr[i + 1] = arr[i] ^ arr[i + 1];
                arr[i] = arr[i] ^ arr[i + 1];
                swap = true;
            }
        }
    }
    return count;
}

int main()
{
    fast() int n;
    cin >> n;
    int arr[n];
    REP(i, 0, n - 1)
    {
        cin >> arr[i];
    }
    cout << bubble_sort(arr, n);
    return 0;
}
