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
        ll n, m, x, y, y1, y2;
        cin>>n>>m>>x>>y;
        ll mul = n*m;
        if(2*x <= y){
            cout<<mul*x<<"\n";
            continue;
        }
        if(y%2==0){
            y1 = y/2;
            y2 = y/2;
        }else {
            y1 = y/2;
            y2 = y/2 + 1;
        }
        if(x>=y1 && x>=y2){
            if((mul)%2==0){
                cout<<(mul*(y1 + y2))/2;
            }
            else{
                cout<<((mul/2 + 1)*y2 + (mul/2)*y1);
            }
            cout<<"\n";   
        }
        
    }
}
