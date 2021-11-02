// prgram to convert the characters of string from lowercase to uppercase letters using functions 
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::toupper);//function to convert from lowercase to uppercasel
    cout<<s<<endl;

    return 0; 
}
