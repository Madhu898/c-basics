
// madam == madam its an palindrome 
// madhu =! madam its not an palindrome

#include<iostream>
using namespace std;
int main()
{
   string s;
   cout<<"enter the word ";
   getline(cin,s);
  int n=s.length(),check=1;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]!=s[n-i-1])
       {
         check=0;
       }
   }
   if(check==1)
    {
        cout<<"its an palindrome "<<endl;
    }
    else
         {
              cout<<"its not a palindrome "<<endl;
        }
   return 0;
}