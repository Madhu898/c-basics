/*  if input =>
     num= 788765
    output = 
               
                7 2
                8 2
                6 1
                5 1

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int64_t n;
    cin >> n;
    int64_t temp=n;
    int hash[10] = {0};
    int rem = 0;
    int rev=0;
    while (n > 0)
    {
        rem = n % 10;
        hash[rem]++;
        n = n / 10;
        rev=rev*10+rem;
    }
    while(rev>0)
        {
            rem=rev%10;
            if (hash[rem] != 0)
            {
                cout << rem << " " << hash[rem] << endl;
                hash[rem]=0;
            }
            rev=rev/10;
        }
    

    return 0;
}
