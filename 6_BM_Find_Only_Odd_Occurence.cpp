// Given an array of Numbers in which all element are present from the range from 0 to N except 1 Number .
// Your Task is that you need to find that MISSING NUMBER
// Input: nums = [3,0,1]
// Output: 2
// Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

// in this we make USE OF XOR OPERATOR 
// the quality of xor operator is that it will cancel repeated elements except the unique one

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long findMissing(long long a[], long long b[], int n)
    {
        long long  ans = 0;
        for(int i=0;i<n-1;i++){
            ans = ans^(a[i])^(b[i]);
        }
        ans = ans^a[n-1];
        return ans;
    }
};


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n], b[n-1];

        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
          cin>>b[i];
        }
        Solution ob;
        cout<<ob.findMissing(a, b, n)<<endl;
    }
}
