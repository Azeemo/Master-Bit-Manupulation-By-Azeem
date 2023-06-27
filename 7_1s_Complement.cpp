#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
class Solution{ 
public:
   string onesComplement( string s, int n ) {
    for ( char& c : s ) c ^= 1;
    return s;
} 
};
////////////////////////////////////////////////////////////////////////////////////////////////
//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.onesComplement(s,n)<<"\n";
    }
