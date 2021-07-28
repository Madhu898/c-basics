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
    cout<<"the spiral matrix are "<<endl;

    int rstart = 0, cstart = 0, rend = r - 1, cend = c - 1;
    while (rstart <= rend && cstart <= cend)
    {
        for (int i = cstart; i <= cend; i++)
        {
            cout << mat[rstart][i] << " ";
            
        }
        rstart++;
        for (int i = rstart; i <= rend; i++)
        {
            cout << mat[i][cend] << " ";
        }
        cend--;
        for (int i = cend; i >= cstart; i--)
        {
            cout << mat[rend][i] << " ";
        }
        rend--;
        for (int i = rend; i >= rstart; i--)
        {
            cout << mat[i][cstart] << " ";
        }
        cstart++;
    }

    return 0;
}