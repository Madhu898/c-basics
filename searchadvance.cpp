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
   int row=0,col=c-1,flag=0;
   int key;
   cout<<"enter the element to be searched "<<endl;
   cin>>key;
   int count=0;
   while(row<r&&col>=0)
   {
       cout<<" pass"<<count;
       if(mat[row][col]==key)
      { flag=1;
      cout<<"element found "<<endl;
      return 0;
      }
       if(mat[row][col]>key)
    {col--;}
       else 
      { row++;}
      count++;
   }
   if(flag)
   cout<<"element found "<<endl;
   else 
   cout<<"sorry element not found "<<endl;
     
   return 0;
}