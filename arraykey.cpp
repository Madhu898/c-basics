#include<iostream>
#include<cmath>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int ft=0,lt=size-1;
     
     while(ft<=lt)

     {
       int md=(ft+lt)/2;
         if(key==arr[md])
             {return md;}
     else 
           if(key>arr[md])
           {
               ft=md+1;
               
           }
     else 
     
          lt=md-1;
     
     }
     
    return -1;
}
/*int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        return i;
    }
    return -1;
     
}*/
int main()
{
    int n,key,i,j,temp=0;
   int a[n];
    cout<<"enter the size of an array "<<endl;
    cin>>n;
    cout<<"enter the elements of an array "<<endl;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<"\n enter the element to be searched in an array  "<<endl;
    cin>>key;
    int flag=binarysearch(a,n,key);
    if(flag>=0)
     cout<<" the element found at the position "<<flag<<endl;
     else 
     cout<<"sorry element not found "<<endl;    
    return 0;
}
