//  #include<bits/stdc++.h>
// using namespace std;
//  int main()
//  {
//     int n;
//     cin>>n;
//      for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0){
//             cout<<"NO"<<endl;
//             return 0;
//         }
//      }
//      cout<<"YES"<<endl;
//    //loop

//   return 0;
//  } 



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,count=0;
//     cin>>n;
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//             count++;
//     }
//     if(count==0)
//         cout<<"YES"<<endl;
//     else
//         cout<<"NO"<<endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int isPrime(*int n)
    {
        if (n<=1)
        return 0;
    for(int i=02n; i<n; i++)
    if(n%i==0)
    return 0;
    return 1;
    } 
  return 0;
 }