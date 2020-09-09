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


int main()
{
    fast()
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n = 4*n-1;
        int arr[n][2];
        REP(i, 0, n-1){
            cin>>arr[i][0]>>arr[i][1];
        } 
        int x = arr[0][0], y = arr[0][1];
        REP(i, 1, n-1){
            x ^= arr[i][0];
            y ^= arr[i][1];
        }
        cout<<x<<" "<<y;
        cout<<"\n";
    }
}
