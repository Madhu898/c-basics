#include <iostream>
#include <cmath>
using namespace std;
bool ispythogarous(int x, int y, int z)
{
    int a, b, c;
    {
        a = max(x, max(y, z));
        if (a = x)
        {
            b = y;
            c = z;
        }
        else if (a = y)
        {
            b = x;
            c = z;
        }
        else
        {
            b = x;
            c = y;
        }
    }
    if ( (a * a) == (b * b) + (c * c))
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int a1, b1, c1;
    cout << "enter the values of a , b, and c " << endl;
    cin >> a1 >> b1 >> c1;
    if (ispythogarous(a1, b1, c1))
     cout << "the numbers are pythogarous triplet " << endl;
     else
     cout<<"the numbers are not pythogarous triplets "<<endl;

    return 0;
}