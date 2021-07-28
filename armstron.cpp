#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num,temp,rem;
    cout << "enter the number " << endl;
    cin >> num;
    temp=num;
    int sum=0;
    while (num != 0)
    {
        rem = num % 10;        
        sum=sum+pow(rem,3);        
        num = (num / 10);
    }
    if(sum==temp)
    {
        cout<<"the number is armstrong number "<<endl;
    }
   else 
    cout << "the number is not an armstrong number "<<sum<<endl;
    return 0;
}