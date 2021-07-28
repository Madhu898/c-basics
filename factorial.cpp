#include<iostream>
#include<cmath>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<"the factorial of the "<<n<<" is "<<factorial(n)<<endl;    
    return 0;
}