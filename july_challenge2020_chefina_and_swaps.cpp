#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef set<string> ss;

#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define REP(j, a, b) \
    for (int j = int(a); j <= int(b); j++)
#define TRss(c, it) \
    for (ss::iterator it = (c).begin(); it != (c).end(); it++)

int main()
{
    fast()
    int t;
    cin>>t;
    while(t--){

        vector<int> vec1;
        vector<int> vec2;

        int res = 0;
        int n;
        cin>>n;
        vi a;
        a.resize(n);
        vi b;
        b.resize(n);
        REP(i ,0 , n-1){
            cin>>a[i];
        }
        REP(i , 0, n-1){
            cin>>b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0;
        while(i<a.size()){
            if(a[i] == a[i+1]){
                vec1.push_back(a[i]);
                a.erase(a.begin()+i, a.begin()+i+2);
            }else{
                i++;
            }
        }
        i = 0;
        while(i<b.size()){
            if(b[i] == b[i+1]){
                vec2.push_back(b[i]);
                b.erase(b.begin()+i, b.begin()+i+2);
            }else{
                i++;
            }
        }

        if(a.size() != b.size())
            res = -1;
        else{
            REP(j, 0, a.size()-1){
                if(a[j]!=b[j]){
                    res=-1;
                    break;
                }
            }
        }
        // REP(i, 0, a.size()-1)
        //     cout<<a[i]<<" ";
        // cout<<"\n";
        // REP(i, 0, b.size()-1)
        //     cout<<b[i]<<" ";
        //     cout<<"\n";
        // REP(i, 0, vec1.size()-1)
        //     cout<<vec1[i]<<" ";
        // cout<<"\n";
        // REP(i, 0, vec2.size()-1)
        //     cout<<vec2[i]<<" ";
        //     cout<<"\n";
        // cout<<res;

        if(res == -1){
            cout<<"-1"<<"\n";
            continue;
        } else if(res!= -1 && vec1.size()==0 && vec2.size()==0){
            cout<<"0"<<"\n";
            continue;
        } else{
            sort(vec1.begin(), vec1.end());
            sort(vec2.begin(), vec2.end(), greater<int>());
            REP(i, 0, vec1.size()-1){
                res += min(vec1[i], vec2[i]);
            }
            cout<<res<<"\n";
        }
    }
}
