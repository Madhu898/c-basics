#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void show(int *p)
{
    cout<<"the value of pointer is "<<*p<<endl;
}
int main()
{
   int x;
   cout<<"enter the value of the x "<<endl;
   cin>>x;
   int *p=&x;
   show(p);
    return 0;
}