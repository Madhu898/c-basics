#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int lcm(int a,int b)
{
    int m=(a>b)?a:b;
    while(true)
    {
        if(m%a==0&&m%b==0)
        return m;
        m++;
    }
}

int main()
{
    system("cls");
    cout<<lcm(4,8);
    return 0;
}
