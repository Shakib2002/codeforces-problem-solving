//Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int a,b,c;
     cin>>a>>b>>c;
     int x=a, y=b, z=c;
     if(a>b)swap(a,b);
     if(b>c)
     {
        swap(c,b);
        if(a>b)swap(a,b);
     }
     cout<<a<<endl;
     cout<<b<<endl;
     cout<<c<<endl;
     cout<<endl;
     cout<<x<<endl;
     cout<<y<<endl;
     cout<<z<<endl;
  return 0;
 }

//LOGIC: I have 3 numbers(A B C)=(4 3 2). Now I will sort ascending order using swap. First, I will check A<B Because I want to be A<B<C. First condition A<B but A is not less than B so I have to swap this number. Now I make a Swap the Number (A B C)=(3 4 2). Now I check the same number (B<C) but the result B is not less than C. Swap the number (A B C)=(3 2 4). Now I also check this number (A<B) but the same result A is not less than B. Swap the number (A B C)=(2 3 4). This is my number in the Sorting order.
 