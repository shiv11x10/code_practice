#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
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
        int x,y,z;
        cin>>x>>y>>z;
        if(x==y && y==z){
            cout<<"YES"<<"\n";
            cout<<x<<" "<<x<<" "<<x<<"\n";
            continue;
        }
        if(x == y && z < x){
            cout<<"YES"<<"\n";
            cout<<z<<" "<<z<<" "<<x<<"\n";
            continue;
        }
        if(y == z && x < y){
            cout<<"YES"<<"\n";
            cout<<x<<" "<<x<<" "<<y<<"\n";
            continue;
        }
        if(x == z && y < x){
            cout<<"YES"<<"\n";
            cout<<y<<" "<<y<<" "<<x<<"\n";
            continue;
        }
        cout<<"NO"<<"\n";
    }
}
