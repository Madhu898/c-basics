#include <iostream>
#include <cmath>
using namespace std;
void bubblesort(int a[], int n)
{
    int issorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
       cout<<"\n \n \n  working on pass no "<<i+1<<endl;
        issorted = 1;
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                issorted = 0;
            }
        }
        if (issorted)
        {
            return;
        }
    }
}
void print(int array[], int n)
{

    cout << "\n \n the elemets in the array are  " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int n;
    cout << "enter the size of an array " << endl;
    cin >> n;
    int array[n];
    cout << "enter the elements in to an array  " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    print(array, n);
    bubblesort(array, n);
    cout << "\n after the bubble sorting technique   " << endl;
    print(array, n);

    return 0;
}