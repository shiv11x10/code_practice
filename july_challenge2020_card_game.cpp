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

int getSum(int n) {  
    int sum = 0; 
    while (n != 0) { 
        sum = sum + n % 10; 
        n = n/10; 
    }  
    return sum; 
} 

int main()
{
    fast()
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c, m, sumc, summ, p_chef=0, p_morty=0;
        REP(i, 0, n-1){
            cin>>c>>m;
            sumc = getSum(c);
            summ = getSum(m);
            if(sumc>summ){
                p_chef++;
            }else if(summ>sumc){
                p_morty++;
            }else{
                p_chef++;
                p_morty++;
            }
        }

        if(p_chef>p_morty){
            cout<<0<<" "<<p_chef;
        }else if(p_chef<p_morty){
            cout<<1<<" "<<p_morty;
        }else{
            cout<<2<<" "<<p_morty;
        }
        cout<<"\n";
    }
}
