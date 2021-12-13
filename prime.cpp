#include <iostream>

using namespace std;
int main()
{
int n,c=0;
cout <<"enter a number:";
std::cin >>n;
if(n==0){
    cout<<"invaild number";
} 
for(int i=1;i<=n;i++)
{
    if(n%i==0)
    {
        c++;
    }
  
}
if(c==1){
    cout<<"prime number";
}
else{
    cout<<"not prime  number";
}
return 0;
}
