#include<iostream>
#include<cmath>
#define max 100
using namespace std;
long long dtb(int n);
int main()
{
    int n,i;
    int arr[max];
    cout<<"enter an decemal number "<<endl;
    cin>>n;
    int temp=n;
    for(i=0;n!=0;i++)
    {
     arr[i]= n%2;
        n=n/2;
    }
    cout<<"the binary number  for the number "<<temp<<" is ";
    for(i=i-1;i>=0;i--)
    {cout<<arr[i]<<" ";} 
    return 0;
    }
   