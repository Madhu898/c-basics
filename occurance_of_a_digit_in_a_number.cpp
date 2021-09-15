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
       rem=num%10;      //to get the digit in the number 
       num=num/10;
       if(rem==digit)   //comparing the remainder with the digit i.e. equality of the number and the digit 
       {
           count++;     //if the number is found incrementing the count value
           found=1;

       }
   }
   if(found==0)
   {
       cout<<"the entered digit is not found in the number "<<endl;     //it is for the non occurance of the digit in an number 
   }
  
  else
  { cout<<"the number is repeated in "<<count<<" times "<<endl;}
    return 0;
}
