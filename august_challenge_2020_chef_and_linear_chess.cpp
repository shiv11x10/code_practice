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
    ifstream file;
    file.open("test.txt");
    int t;
    file>>t;
    while(t--){
        ll n, k;
        file>>n>>k;
        ll max_num = 0, temp;
        REP(i, 0, n-1){
            file>>temp;
            if(temp<k && k%temp==0){
                if(temp > max_num){
                    max_num = temp;
                }
            }
        }
        if(max_num == 0)
            cout<<-1;
        else
            cout<<max_num;

        cout<<"\n";
        
    }
}
