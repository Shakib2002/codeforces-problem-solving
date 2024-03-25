/*//Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

//Builtin Function Solution
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    char x;
    cin>>x;
    if(x>='A' && x<='Z')
    cout<<(char) tolower(x);
else
cout<<(char) toupper(x); 
  return 0;
 }*/

 #include<bits/stdc++.h>
 using namespace std;
  int main()
  {
      char x;
      cin>>x;

      if(x>= 65 && x<= 90)
      cout<<(char)(x+32)<<endl;
    else
    cout<<(char)(x-32)<<endl;
   return 0;
  }