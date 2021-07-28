#include <iostream>
#include <string>
using namespace std;
class complex
{
    public:
    int real, img;


    void read()
    {
        cout << "enter the real part of complex number " << endl;
        cin >> real;
        cout << "enter the imaginary part of the complex number " << endl;
        cin >> img;
    }
    void show()
    {
        cout << "the complex number is (" << real << " + " << img << "i"
             << ")" << endl;
    }
    void add(complex x,complex y)
    {
      cout << "the added complex number is (" << x.real+y.real << " + " << x.img+y.img<< "i"<< ")" << endl;


    }
};

int main()
{
 
 complex c1; 
complex *ptr=new complex;
 ptr->real=3;
 ptr->img=9;
 ptr->show();
 c1=*ptr;
 c1.show();   
    return 0;
}