/*You are given a number N. You need to convert it to 1 in minimum number of operations.

The operations allowed are as follows:

If N is even then divide the number by 2.
If N is odd then you can either add 1 to it or subtract 1 from it.
Using the above operations, find the minimum number of operations require to convert N to 1.

Input:
The first line of input contains T denoting the number of testcases. T testcases follow. 
Each testcase contains 1 line of input containing N.

Output:
For each testcase, in a new line, print the minimum number of steps required.

Constraints:
1 <= T <= 100
1 <= N <= 107

Examples:
Input:
4
1
2
3
4
Output:
0
1
2
2

Explanation:
Testcase1: 1 can be converted into 1 in 0 steps.
Testcase2: 2 can be converted into 1 in 1 step: 2-1

*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
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
#define max 10000000

int set_bits(int n) 
{ 
    int count = 0; 
  
    while (n) { 
        count += n % 2; 
        n /= 2; 
    } 
  
    return count; 
} 
  
// Function to return the minimum 
// steps required to reach 1 
int minSteps(int n) 
{ 
    int ans = 0; 
  
    while (n != 1) { 
  
        // If n is even then divide it by 2 
        if (n % 2 == 0) 
            n /= 2; 
  
        // If n is 3 or the number of set bits 
        // in (n - 1) is less than the number 
        // of set bits in (n + 1) 
        else if (n == 3 
                 or set_bits(n - 1) < set_bits(n + 1)) 
            n--; 
        else
            n++; 
  
        // Increment the number of steps 
        ans++; 
    } 
  
    // Return the minimum number of steps 
    return ans; 
} 

int main()
{
    fast()

    // int table[max+2];
    // table[0] = 0;
    // table[1] = 0;

    // for(int i=2; i<max+2; i++){
    //     if(i%2 == 0)
    //         table[i] = table[int(i/2)] + 1;
    //     else
    //         table[i] = 1 + (table[int((i-1)/2)] < table[int((i+1)/2)] ? table[i-1] : (table[int((i+1)/2)] + 1));
    // }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         cout << minSteps(n)<<"\n"; 
    }
    
}