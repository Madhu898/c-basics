#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int r, c;
    cout << "enter the no of rows and columns " << endl;
    cin >> r >> c;
    int mat[r][c];
    cout << "enter the elements in to the matrix " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "the elements in the matrix are  " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    




return 0;
}