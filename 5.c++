#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<endl<<"Enter a number";
    cin>>n;

    if(n%5==0)
    {
        cout<<endl<<""<<n<<"is divisible by 5";
    }
    else
    {
        cout<<endl<<""<<n<<"is not divisible by 5";
    }

    return 0;
    
}