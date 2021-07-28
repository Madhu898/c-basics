#include <iostream>
using namespace std;
class employee
{
    int t;
    float salary;

public:
    void getinfo()
    {
        cout << "enter the working hours  per day of an employee " << endl;
        cin >> t;
        cout << "enter the salary of an employee " << endl;
        cin >> salary;
    }
    void addsalary()
    {
        if (salary < 25000)
        {
            salary += 10000;
        }
    }
    void addtime()
    {
        if (t > 8)
        {
            salary += 5000;
        }
    }

    float getsalary()
    {
        
        
        addtime();
        addsalary();
        
        cout << "the salary of the employee is " << salary << endl;
    }
};
int main()
{
   
    employee *p = new employee;
    p->getinfo();    
    p->getsalary();

    return 0;
}