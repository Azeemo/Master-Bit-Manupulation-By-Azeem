#include<bits/stdc++.h> 
using namespace std; 
class Solution
{
public:
    int setKthBit(int n, int k)
    { // here numbering is from 1 from right 
        // so in example 1 at k=2 we are talking of 3rd bit from right
        // so we moved 1 k times and did or operation which will make kth bit 1 always
        return ((1<<(k)|n));
    }  
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        
        Solution ob;
        int ans = ob.setKthBit(N,K);
        cout << ans << endl;
    }
    return 0;
}
