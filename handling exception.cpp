#include<iostream>
using namespace std;
int main()
{
try
{
int a,b;
cout<<"enter a,b values";
cin>>a>>b;
if(b==0)
throw b;
else
cout<<a/b;
}
catch(int x)
{
cout<<"divided by zero error";
}
}
