// Given an integer array of N integers, find sum of bit differences in all pairs that can be formed from array elements. Bit difference of a pair (x, y) is count of different bits at same positions in binary representations of x and y.
// For example, bit difference for 2 and 7 is 2. Binary representation of 2 is 010 and 7 is 111 (first and last bits differ in two numbers).

// Note: (x, y) and (y, x) are considered two separate pairs.
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution{
    private:
    int calbits(int a , int b){
        int count =0;
          while(a>0||b>0){
         if((a&1) == (b&1)){
             count++;
         }
         a=a>>1;
         b=b>>1;
          }
          return count;
    }
public:
	
	long long sumBitDifferences(int arr[], int n) {
	     int i =0;
	     int j=0;
	     int ans=0;
	    while(i<n){
	        ans = ans + calbits(i,j);
	        if(j<n){
	            j++;
	        }
	        
	        else if(j==n-1){
	            i++;
	            j=i;
	        }
	    }
	    return ans;
	}
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
