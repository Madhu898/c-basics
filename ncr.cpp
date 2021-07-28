#include<iostream>
#include<cmath>
using namespace std;
int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
       fact=fact*i;
    }
    return fact;
}
int ncr(int a,int b)
{
    int result=1;
    result= (factorial(a))/(factorial(b)*factorial(a-b));
    return result;
}
int main()
{
   int n,r;
   cout<<"enter the values of (n ,r ) "<<endl;
   cin>>n>>r;
   cout<<"the ncr of the "<<n<<" and "<<r<<" is "<<ncr(n,r)<<endl;   
   return 0;
}