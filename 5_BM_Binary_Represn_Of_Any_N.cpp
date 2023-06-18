#include<bits/stdc++.h> 
using namespace std; 
class Solution{
public:
    string getBinaryRep(int N)
    {       bitset<30> sol = N;
        string s="";
        for (int i = 29; i>=0; i--){
            s+=to_string(sol[i]);
        }
        return s;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
       
        Solution ob;
        string ans = ob.getBinaryRep(N);
        cout << ans << endl;
    }
    return 0;
}
