#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;

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
        int n, k;
        cin>>n>>k;
        int d;
        REP(i, 0, n-1){
            cin>>d;
            if(d%k==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<"\n";
    }
}
