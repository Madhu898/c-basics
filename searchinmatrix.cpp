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
   cout<<"enter the elment to be serched in matrix "<<endl;
   int key;
   cin>>key;
   int flag=0;
   int row=0,col=0;
   for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           if(mat[i][j]==key)
           flag=1;
           row=i,col=j;
                      
        }
    }
   if(flag)
   cout<<"element found in the matrix  "<<"at row "<<row<<"and at column "<<col<<endl;
   else 
   cout<<"sorry element not found "<<endl;
    return 0;
}