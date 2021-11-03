// to segragate even numbers and odd numbers in array from left and right respectively
// 1 4 3 6 6  ----->>>   4 6 6 3 1 all even numbers are from left and odd nubers right
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int f = 0, l = n - 1;
    while (f < l)
    {
        while (a[f] % 2 == 0 && f < l)
        {
            f++;
        }
        while (a[l] % 2 != 0 && a[l] != 0 && f < l)
        {
            l--;
        }
        int temp = a[f];
        a[f] = a[l];
        a[l] = temp;
        f++;
        l--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
