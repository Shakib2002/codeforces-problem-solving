/*Given two person names.

Each person has {"the first name" + "the second name"}

Determine whether they are brothers or not.

Note: The two persons are brothers if they share the same second name.*/


#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     string f1,s1;
     cin>>f1>>s1;

     string f2,s2;
     cin>>f2>>s2;

     cout<<(s1==s2 ? "ARE Brothers" :"NOT")<<endl;
  return 0;
 }