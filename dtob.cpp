#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, x = 1, rem = 0, sum = 0;
    cout << "enter the decimal number :" << endl;
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        rem = n % 2;
        sum = sum + x * rem;
        x = x * 10;
        n = n / 2;
    }
    cout << "the binary number for the decimal number " << temp << " is : " << sum << endl;
    return 0;
}