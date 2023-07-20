// IN POWER SET WE FIND OUT ALL THE POSSIBLE SUSEQUENCES OF AN ARRAY OR STRING
// ONE OF THE METHODS IS BY POWER SET
// A SUBSEQUEnCE : a cintigious / non contigious sequence which follows the order
// now consider the eXMAPLE OF the string = " abc " 
// now here the possible combinations of the strings can be of max of 8 possible ways :
// -> (2 raise to the power 3)  
// it can be represted as (1<<n)

// now for 8 items 
 2 1 0 indexxing starts from left in bit manupulation
 0 0 0  ""
 0 0 1  a
 0 1 0  b
 1 0 0  c
 1 1 1  abc
 1 1 0  ab
 1 0 1  ac
 0 1 1  bc

   now here 0 means not take and 1 means take

   so now here 
   we will find all the ones and add their corresponding character into a string and then add it:
 n = 3 (ie size of sting abc is 3 )
vecor<String> v;
 for(int i = 0;i<(1>>n);i++){
   for(int j =0;j<n;j++){
     string ans = "";
     if(if(i&(1<<j)){
       ans = ans + s[j];
     }
  
       
   }
   v.push_back(ans);     
 }



// the ccombinations beig composed are ->"", a,b,c,ab,bc,ac,abc
