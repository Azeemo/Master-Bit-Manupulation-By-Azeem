#include<bits/stdc++.h>
using namespace std;
int setBits(int N) 
    {
        int count = 0;
        while(N>0)
        {
            if(N&1==1){
                count++;
            }
            N=N>>1;
        }
        return count;
    }
int main()
{
  int n;
  cin>>n;
  int setbits= setBits(n);
  cout<<"set bits  in " << n << seetBits(n)<<endl;
  
}
