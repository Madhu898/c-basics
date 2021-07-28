#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cout<<"enter the decimal number "<<endl;
    cin>>num;
    int temp=num;
    int sum=0,rem=0,x=1;
    while(num>0)
    {
      rem=num%8;
      sum=sum+rem*x;
      x=x*10;
      num=num/8;
    }
    cout<<"the octal number for the decimal number "<<temp<<" is "<<sum;
     return 0;
}