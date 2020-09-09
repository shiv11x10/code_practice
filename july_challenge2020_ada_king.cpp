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
        int k;
        cin>>k;
        if(k<8){
            cout<<"O";
            REP(i, 1, k-1){
                cout<<".";
            }
                cout<<"X";
            REP(i, 0, 6-k){
                cout<<".";
            }
            cout<<"\n";
            REP(i, 0, k-1){
                cout<<"X";
            }
            cout<<"X";
            REP(i, 0, 6-k){
                cout<<".";
            }
            cout<<"\n";
            REP(i, 0, 5){
                REP(j, 0, 7){
                    cout<<".";
                }
                cout<<"\n";
            }
        }else{
            int div = k/8;
            int rem = k%8;
            REP(i, 0, div-1){
                REP(j, 0, 7){
                    if(i==0&&j==0){
                        cout<<"O";
                    }else{
                        cout<<".";
                    }
                }
                cout<<"\n";
            }
            if(div<8){
                REP(i, 0, rem-1){
                    cout<<".";
                }
                REP(i, 0, 7-rem){
                    cout<<"X";
                }
            }
            cout<<"\n";
            if(div<7){
                REP(i, 0, rem-1){
                    cout<<"X";
                }
                if(rem>0){
                    cout<<"X";
                }
                if(rem==0){
                    cout<<".";
                }
                REP(i, 0, 6-rem){
                    cout<<".";
                }
                cout<<"\n";
                REP(i, 0, 5-div){
                    REP(j, 0, 7){
                        cout<<".";
                    }
                    cout<<"\n";
                }
            }
        
        }  
        
    }
}
