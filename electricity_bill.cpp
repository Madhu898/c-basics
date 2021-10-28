#include<iostream>
using namespace std;
int main()

{
    int test,i=0;
    cout<<"enter no of test cases "<<endl;
    cin>>test;
    
    while(i<test)
    {
    int units,total=0;
    cout<<"\nenter no of units at "<<i+1<<" case "<<endl;
    cin>>units;
    
    if (units<0)
    {
        cout<<0<<endl;
        i++;
        continue;
    }
    else if (units>0&&units<=50)
    {
        total =units*1;
        
    }
    else if (units>50&&units<=150)
    {
        total =(50*1)+(units-50)*2;
        
    }
    else if (units>150)
    {
        total =(50*1)+(100*2)+(units-150)*5;
        
    }
    total=total+50;

    cout<<total<<endl;
    i++;
    }
    cout<<"\nthanks for knowing your electricity bill "<<endl;
    return 0;
}
