//Given two numbers N and M. Print the summation of their last digits.

// #include<bits/stdc++.h>
// using namespace std;
//  int main()
//  {
//     string a,b;
//     cin>>a>>b;
//     int x= a[a.size()-1]-'0', y= b[b.size()-1]-'0';
//     cout << x+y << endl; 
//   return 0;
//  }
//9 line: this is string to int converting ..first of fall fine the last value x=a[a.size()-1], then '0'-'0' will convert the last value.


#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    long long n,m;
    cin >>n>> m;

    cout<<(n%10)+(m%1  0)<<endl;
  return 0;
 }

 // We know that, Dividing/Modules any number by 10 gives last number. if 10456%10 is last digit 6.