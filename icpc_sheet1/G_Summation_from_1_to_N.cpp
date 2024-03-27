//Given a number N Print the summation of the numbers that is between 1 and N (inclusive)

// #include<bits/stdc++.h>
// using namespace std;
//  int main()
//  {
//      long long n,sum=0;
//      cin>>n;
//      sum= n*(n+1)/2;
//      cout<<sum<<endl;
//   return 0;
//  }
 // just single input exited this programme.



#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int tc;
    cin>>tc;
    for(int i=0; i<tc; i++)
    {
        long long n;
        cin>>n;
        long long sum= n*(n+1)/2;
        cout<<sum<<endl;


    } 
  return 0;
 }
