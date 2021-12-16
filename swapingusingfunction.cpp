
#include<bits/stdc++.h>
void swap(int,int);
using namespace std;

int main()
{
int a,b; 

 cin>>a >>b;
 
 swap(a,b);
}

void swap(int x,int y)
{
    int temp;
temp=x;
x=y;
y=temp;
cout<<x<<endl;
cout<<y;
}
  

/*67
89
89
67*/
