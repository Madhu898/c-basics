#include<iostream>
using namespace std;
int main()
{
  int n,sum=0,product=1;
  char ch;
  while(1)
  {
      cin>>n;
      sum+=n;
      product*=n;
      cout<<"enteer q if you want to quit program ";
      if(ch=='q')
      {
          return 0;
      }
  
  }
cout<<"the sum of the all enterd numbers are "<<sum<<endl;
cout<<"the product of all numbers are "<<product<<endl;
return 0;

}