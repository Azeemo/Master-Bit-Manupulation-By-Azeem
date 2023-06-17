#include<bits/stdc++.h>
using namespace std;
int main(){
int x = 3;
int y =6;

// logical AND
cout<<(x&y)<<endl;
  // only gives  1 when both bits are 1
  // else 0

// OR OPERATOR
cout<<(x||y)<<endl;
  // only gives 0 when both bits are 0
  // else 1

// xor operator
cout<<(x^y)<<endl;
// gives 0  when both bits are same
// gives 1  when both bits are different

// Left shift operator
  //eliminates the leftmostbit and add  one zero  bit on the RHS
  cout<<(x<<1)<<endl;
  cout<<(x<<y)<<endl;
  //you need to left shift y bits of x
  // if we assume that  all leadimg bits are 0 otherwise this formula will decrement value
  // then (x<<y)=x*2^y
  

  // Right shift operator
  //eliminates the rightmostbit and add  one zero  bit on the lHS
  cout<<(x>>1)<<endl;
  cout<<(x>>y)<<endl;
  //you need to right shift y bits of x
  // then (x>>y)  is equivalent to  (x>>y)  =  x/2^y

  // BITWISE NOT
  // it turn  all  0 to 1 and all 1 to 0
  // in this we use unsigned int as by this the ans is always +ve
  unsigned int x =1;
  cout<<(~x)<<endl;

return 0;
}
