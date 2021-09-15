// this code is for to check the number of occurance of a digit in an given number
#include<iostream>
#include<string>
using namespace std;
int main()
{
   int num,digit,rem=0,count=0; 
   cout<<"enter the number "<<endl;
   cin>>num;
   cout<<"enter the digit to be searched "<<endl;
   cin>>digit;
   int found=0;
   while(num>0)
   {
       rem=num%10;
       num=num/10;
       if(rem==digit)
       {
           count++;
           found=1;

       }
   }
   if(found==0)
   {
       cout<<"the entered digit is not found in the number "<<endl;
   }
  
  else
  { cout<<"the number is repeated in "<<count<<" times "<<endl;}
    return 0;
}