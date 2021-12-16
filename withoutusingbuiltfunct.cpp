#include<bits/stdc++.h>
using namespace std;

void rev_string(string &s)
{
int n=s.size();
    for(int i=0;i<n/2;i++)
    {
       swap(s[i],s[n-1-i]);
    }
    
}
int main(){
string s;
cin>>s;
rev_string(s);
cout<<s<<endl;
}
//BALAJIKING
//GNIKIJALAB
