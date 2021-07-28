#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cout << "enter the number " << endl;
    cin >> num;
    cout << "the original number is " << num << endl;
    int lastdigit = 0;
    int rem = 0;
    while (num > 0)
    {
        rem = num % 10;
        lastdigit = lastdigit * 10 + rem;
        num = (num / 10);
    }
    cout << "the reverse of the number is " << lastdigit << endl;
    return 0;
}