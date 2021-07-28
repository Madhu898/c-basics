#include<iostream>
using namespace std;

int main()
{
     int a,b,c;
    cout<<"enter three numbers "<<endl;
    cin>>a>>b>>c;
    int l,s;
    l=max(a,max(b,c));  
    int i=l;  
    while(1)
    {
       if(i%a==0&&i%b==0&&i%c==0)
         {
           cout<<"the LCM of ("<<a<<" ,"<<b<<" ,"<<c<<")"<<" is "<<" = "<<i<<endl;
           break;   
          }
          i++;
          
    }  
    
    return 0;
}