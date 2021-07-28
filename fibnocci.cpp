#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int first=0,second=1,n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++)
    {
     cout<<first<<" ";
     sum=first+second;
     first=second;
     second=sum;
    }

    return 0;
}