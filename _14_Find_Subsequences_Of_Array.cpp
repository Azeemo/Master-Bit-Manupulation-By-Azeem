
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution
{
    public:
    vector<vector<int> > subsets(vector<int>& A)
    {    // here we  need to take a 2d vector because 
       // we will store ecombination of = and 1 which will give us vecor 
      // which  will be stored inside a vector 
      // but the cCONCEPT IS SAME AS THAT OF STRING
        vector<vector<int>> ans;
        int n = A.size();
		    int lines = (1<<n);
		    for(int i=0;i<lines;i++)
		   {
		       vector<int>temp;
		        for(int j=0;j<n;j++)
		        {
		            if((i&(1<<j))){
		              temp.push_back(A[j]);
		            }
		        }
		       ans.push_back(temp);
		}
		    
		    sort(ans.begin(),ans.end());
		    return ans;
		}

};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}
