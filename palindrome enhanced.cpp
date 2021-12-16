#include <iostream>

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
   
    cin>>s;
    int n=s.size();
    string t=s;
   reverse(t.begin(),t.end());
    if(s==t){
        cout<<n<<endl;
    }
    else{
        cout<<n*2<<endl;
    }
    
}
//not palindrome
///balaji
//12
------------------------------------
//palindrome
 //madam
  //5
