#include<iostream>
using namespace std;

int main()
{
int a,b,c,sum;

cout<<endl<<"Enter angle a:";
cin>>a;

cout<<endl<<"Enter angle b:";
cin>>b;

cout<<endl<<"Enter angle c:";
cin>>c;

sum=a+b+c;

if(sum==180 && a!=0 && b!=0 && c!=0)
{
    cout<<endl<<"Valid Triangle";
}
else
{
    cout<<endl<<"Invalid Triangle";
}

return 0;

}