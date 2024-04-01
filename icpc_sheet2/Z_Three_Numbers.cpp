#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    long long k,s,C=0,z;
    cin>>k>>s;
    for(int x=0; x<=k; x++){
        for(int y=0; y<=k; y++){
                z=s-x-y;
                if(z>=0 && z<=k)
                C++;
            
        }
    }
cout<<C<<endl;
  return 0;
 }