/*  if input =>
     num= 11225566
    output = 
                1 -> 2
                2 -> 2
                5 -> 2
                6 -> 2

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int64_t n;
    cin>>n;
    int hash[10]={0};
    int rem=0;
    while(n>0)
    {
        rem=n%10;
        hash[rem]++;
        n=n/10;
    }
    for(int i=0;i<10;i++)
    {
       
        {
            if(hash[i]!=0)
            {
            cout<<i<<" "<<hash[i]<<endl;
            }
        }
    }
    
    return 0;
}
