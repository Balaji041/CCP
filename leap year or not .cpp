// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter a year:";
cin>>n;
if(n%4==0 || (n%100==0 && n%400!=0)){
    cout<<"leap year";
    
}else{
    cout<<"not leap year";
}

    return 0;
}
/*enter a year:2012
leap year*/
