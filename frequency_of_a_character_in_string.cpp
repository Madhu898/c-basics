// prgram to convert the characters of string from lowercase to uppercase letters using functions 
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    system("cls");
    cout<<"enter the string "<<endl;
    string s;
    int f[26]={0};
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        f[s[i]-'a']++;
    }
    char ch ='a';
    for(int i=0;i<26;i++)
    {
        if(f[i]==0)
        {
            continue;
        }
        else
        {cout<<char(ch+i)<<"  " <<f[i]<<endl;}
    }

    return 0; 
}
