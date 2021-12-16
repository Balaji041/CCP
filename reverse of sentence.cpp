#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
int n=s.size(),i,cnt=0;
for(i=n-1;i>=0;i--){
    if(s[i]!=' ')
    cnt++;
    else{
        cout<<s.substr(i+1,cnt)<<" ";
        cnt=0;
    }
}
  if(cnt!=0)
  cout<<s.substr(0,cnt)<<endl;
  }
