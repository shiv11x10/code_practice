#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define REP(i, a, b) \
    for (int i = int(a); i <= int(b); i++)
#define MAX 26

int main()
{
    fast();

    ifstream file;
    file.open("test.txt");
    int t;
    file>>t;
    while(t--){
        int alpha_s[MAX] = {0};
    int alpha_p[MAX] = {0};
        string s, p;
        file>>s;
        file>>p;

        REP(i, 0, s.length() - 1){
            alpha_s[s[i] - 'a']++;
        }

        int flag = 0;
        REP(i, 0, p.length() - 1){
            alpha_p[p[i] - 'a']++;
            if(flag==0 && (p[i]-'a' > p[0] - 'a'))
                flag = 1;
        }

        REP(i, 0, MAX - 1){
            alpha_s[i] -= alpha_p[i];
        }

        string res = "";
        REP(i, 0, MAX - 1){
            if(flag == 1){
                while(alpha_s[i]--)
                    // cout<<char(97 + i);
                    res += char(97+i);
                if((p[0]-'a') == i)
                    // cout<<p;
                    res += p;
            } else{
                if((p[0]-'a') == i)
                    // cout<<p;
                    res += p;
                while(alpha_s[i]--)
                    // cout<<char(97 + i);
                    res += char(97+i);
            }
        }

        cout<<res<<"\n";
        
    }
}
