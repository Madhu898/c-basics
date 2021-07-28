#include <iostream>
#include <cmath>
using namespace std;
void print(int a[], int n)
{
    cout << "the elements in the array are " <<endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
}
void quicksort(int a[],int n)
{
    cout<<"\n**********--------the elements in the array after selectionsorting techique  are as fallows------*************"<<endl;
    int indexofmin,temp,issorted=0;
    for(int i=0;i<n-1;i++)
    {
       
       cout<<"pass of "<<i+1<<endl;
       indexofmin=i;
       issorted=1;
       for(int j=i+1;j<n;j++)
      { 
          if (a[j]<a[indexofmin])
       {
           indexofmin=j;
           issorted=0;
       }}
       if(issorted)
       {
           return;
       }
       temp=a[i];
       a[i]=a[indexofmin];
       a[indexofmin]=temp;
       
       
    }

}
int main()
{
    int n;
    cout << "enter the size of an array " << endl;
    cin >> n;
    int a[n];
    cout << "enter the elements in to an array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quicksort(a,n);
    print(a, n);
    return 0;
}
