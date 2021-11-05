#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int hcf(int a, int b) {
   if (b == 0)
   return a;
   return hcf(b, a % b);
}
int main() 
{
   system("cls");
   int a,b;
   cin>>a>>b;
   cout<<hcf(a,b);
   return 0;
}
