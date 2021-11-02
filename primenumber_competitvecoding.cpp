// prime nuber
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int t;
    cout<<"enter number of test cases "<<endl;
    cin>>t;
    while(t--)
    {
    int n,flag=1;
    cout<<"enter the number "<<endl;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if( n==1)
    {
        cout<<"nor composite and not prime number "<<endl;
    }
    else if (n>1)
    {
        if(flag==1)
        {
            cout<<"prime "<<endl;
        }
        else
        {
            cout<<"not a prime number "<<endl;
        }
    }
    else
    {
        cout<<"invalid number "<<endl;
    }
    }
    return 0;
}
