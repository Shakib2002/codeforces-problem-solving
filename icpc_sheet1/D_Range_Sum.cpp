// #include<bits/stdc++.h>
// using namespace std;
//  int main()
//  {
//     int t;
//     cin>>t;
//     for(int i=0; i<t; i++)
//     {
//         long long l,r;
//         cin>>l>>r;
//         if(1>r)
//         {
//             swap(l,r);
//         }
//         i--;
//         long long left = l*1ll*(l+1)/2;
//         long long right= r*1ll*(r+1)/2;
//         long long ans = right-left;
//         cout<<ans<<endl;

//     } 
//   return 0;
//  }


#include<bits/stdc++.h>
using namespace std;

long long f(long long x)
{
    long long ans= x*1ll*(x+1)/2;
    return ans;
}
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        long long l,r;
        cin >> l >> r;
        if(l>r)
        {
            swap(l,r);
        }
         long long ans = f(r)-f(l-1);
         cout << ans << endl;
     }
  return 0;
 }