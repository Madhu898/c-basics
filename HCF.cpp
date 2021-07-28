#include <iostream>
using namespace std;

int main()
{
   int a,b;
   cout<<"enter the two numbers "<<endl;
   cin>>a>>b;
  int large=max(a,b);
  int small=min(a,b);
   int rem=1;
   while(small==0)
   {
       rem=large%small;
       large=small;
       small=rem;

   }
   cout << "the HCF of (" << a << " ," << b << " )"
                 << " is "
                 << " = " << large<< endl;
   
   
    return 0;
}