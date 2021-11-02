// frequency of a character in a string 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    cout<<"enter the string "<<endl;
    string s;
    getline(cin,s);
    int f[256]={0};
    for(int i=0;i<s.length();i++)
    {
        f[s[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(f[i]!=0)
        {
            cout<<char(i)<<" "<<f[i]<<endl;
        }
    }

    return 0;
}
