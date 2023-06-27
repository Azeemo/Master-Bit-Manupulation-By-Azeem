
#include <bits/stdc++.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution {

  public:
    int noConseBits(int n) {
        int count = 0;
        int m= n;
       while(n>0){
           if((n&1)==1){
               count++;
               n=n>>1;
               if(count>=3){
                  
               }
           }
           else{
               count = 0;
           }
       }
       return m;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}
