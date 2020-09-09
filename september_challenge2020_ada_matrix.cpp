#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

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
        int mat[n][n];
        REP(i, 0, n-1)
            REP(j, 0, n-1)
                cin>>mat[i][j];

        int t = 0, cnt = 0;
        for(int i = n-1; i >= 0; i--){
            
                if(t==0){
                    if(mat[0][i]>mat[i][0]){
                        cnt++;
                        t=1;
                    }
                }
                else if(t==1){
                    if(mat[i][0]>mat[0][i]){
                        cnt++;
                        t=0;
                    }
                }
        }
        cout<<cnt<<"\n";
    }
}
