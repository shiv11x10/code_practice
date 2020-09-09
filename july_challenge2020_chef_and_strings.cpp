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
        int N;
        cin>>N;
        int s[N];
        REP(i, 0, N-1)
            cin>>s[i];
        ll cnt = 0;
        REP(i, 1, N-1){
            if(s[i]>s[i-1]){
                cnt += (s[i]-s[i-1]-1);
            }
            else{
                cnt += (s[i-1]-s[i]-1);
            }
        }
        cout<<cnt<<"\n";
    }
}
