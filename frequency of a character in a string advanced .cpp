/*
    input : maadddhhshsuu
    output:
            m1
            a2
            d3
            h3
            s2
            u2



*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    string s;
    cin>>s;
    int hash[256]={0};
    for(int i=0;i<s.length();i++)
    {
       hash[s[i]]++;

    }
    for(int i=0;i<s.length();i++)
    {
        if(hash[s[i]]!=0)
        {
        cout<<s[i]<<hash[s[i]]<<endl;
        hash[s[i]]=0;

        }
    }

    return 0;
}
