#include <bits/stdc++.h>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution {
  public:
  bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
 
  if((n&(n-1))==0){
      return true;
  }
  else{
      return false;
  }
  
}
    int findPosition(int n) {
        if(isPowerOfTwo(n)){
            int count = 0;
            while(n>0){
                count++;
            
                if(n&1==1){
                    return count ;
                }
                n=n/2;
            }
        }
        else{
            return -1; 
        }
    }
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
