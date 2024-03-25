#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n1,n2,res;
    char op,eq;
    cin>>n1>>op>>n2>>eq>>res;

    if(op == '+')
    {
        if(n1+n2==res)
        cout<<"Yes"<<endl;
        else 
        cout<< n1 +n2 <<endl;
    }
    else if(op == '-')
    {
        if(n1-n2==res)
        cout<< "Yes" << endl;
        else
        cout<< n1 - n2 << endl;
    }
    else
    {
        if(n1*n2==res)
        cout<< "Yes" << endl;
        else
        cout<< n1 * n2 << endl;
    }
}

 int main()
 {
     solve();
  return 0;
 }