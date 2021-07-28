#include <iostream>
using namespace std;
int n;

int newdiagonaldifference(int n,int a[n][n]);
int main()
{
    int n;
    cout << "enter the size of square matrix " << endl;
    cin >> n;
    int a[n][n];
    cout << "enter the elements of an matrix " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "\nthe elements in an array are " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << "\n";
    }
    int lsum = 0, rsum = 0;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        lsum += a[i][j];
        i++;
        j++;
    }
    i = 0, j = n - 1;
    while (i < n && j >= 0)
    {
        rsum += a[i][j];
        i++;
        j--;
    }
    int difference = lsum - rsum;
    if (difference < 0)
    {
        difference = -difference;
        cout << "\nthe diagonal difference is " << difference << endl;
    }
    else
        cout << "\nthe diagonal diffrnece is " << difference << endl;

      newdiagonaldifference(n,a);
    return 0;
}