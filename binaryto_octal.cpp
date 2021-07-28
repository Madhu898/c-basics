#include<iostream>
#include<cmath>
int btd(int n)
{
    int x=1,rem=0,res=0;
    while(n>0)
    {
        rem=n%10;
        res=res+x*rem;
        x=x*2;
        n=n/10;
    }
return res;
}
using namespace std;
int main()
{
    int num;
    cout<<"enter the binary number "<<endl;
    cin>>num;
    cout<<"the decimal number for the  binary number "<<num<<"  is " <<btd(num)<<endl;
    return 0;
}