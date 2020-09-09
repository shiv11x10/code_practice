#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define REP(i, a, b) \
    for (int i = int(a); i <= int(b); i++)
#define F 1
#define S 2

bool winner(int arr[],int n)
{
    //arr[i] is no. of coins in ith pile
    //n is the no. of piles
    int Alice[n],state,i;   //doing for alice
    Alice[n-1] = 1;
    for(i = n-2; i >= 0; i--)
    {
        if(Alice[i+1] == F)
        state = ((arr[i] > 1)?F:S);
        else     //Alice going second in (i+1)th pile
        state = F;     //pick all here
        Alice[i] = state;
    }
    //in game Alice is starting first
    if(Alice[0] == F)
    return true;
    else
    return false;      //bob wins
}

int main()
{
    fast()
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        REP(i, 0, n-1){
            cin>>a[i];
        }
        bool res;
        res = winner(a, n); 
        if(res){
            cout<<"First"<<"\n";
        }else{
            cout<<"Second"<<"\n";
        }

    }
}
