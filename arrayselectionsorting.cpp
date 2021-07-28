#include <iostream>
using namespace std;
void  sorting(int a[], int n)
{
    int issorted=0;
    for (int i = 0; i < n; i++)
    {
        issorted=1;
        cout<<"\n working on pass number "<<i+1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                issorted=0;
            }
        }
        if(issorted)
        {
            return;
        }
    }
    
}
int main()
{
    int n;
    cout << "enter the size of an array " << endl;
    cin >> n;
    int a[n];
    cout << "enter elements in to an array " << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    sorting(a, n);
    cout << "\nthe sorted elements in the array are " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
