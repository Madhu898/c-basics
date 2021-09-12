#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int i=0;
    int count;
    cout << "enter an line \n";
    getline(cin, s);
   if(s[0]==' ')  
   {
       count=0;
   }
   else 
   {
       count=1;
   }
   
   while(s[i]!='\0')
   {
     if(s[i]==' '&&s[i+1]!=' '&&s[i+1]!='\0')
     {
         count++;
     }
     i++;
   }
   cout<<"the number of words are "<<count<<endl;
    return 0;
}