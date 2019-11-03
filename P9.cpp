#include <iostream>
using namespace std;

class A
{
    int a;
    float b;

public:
    A()
    {
        a = 0;
        b = 0;
    }
    A(int a, float b)
    {
        this->a = a;
        this->b = b;
    }
    friend void display(A);
};

void display(A obj)
{
    cout << "From friend function \n a: " << obj.a << "\n b: " << obj.b << endl;
}

int main()
{
    A obj(2, 4.6);
    display(obj);
    return 0;
}