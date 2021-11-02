// maximum commondifference in subarray max length
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "enter the size of the array " << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pd = 0, large = 2, current = 2;
    pd = a[1] - a[0];

    int j = 2;
    while (j < n)
    {
        if (pd == a[j] - a[j - 1])
        {
            current++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            current = 2;
        }
        large = max(large, current);
        j++;
    }
    cout << large << endl;
    return 0;
}
