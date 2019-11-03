#include <iostream>
using namespace std;

class A;
class B
{
    int x;
    friend class A;

public:
    B() { x = 0; }
    B(int a) { x = a; }
    void display(A);
};

class A
{
    int y;
    friend class B;

public:
    A() { y = 0; }
    A(int b) { y = b; }
    void display(B);
};

void A::display(B obj)
{
    cout << "From class B: \nx: " << obj.x << endl;
}

void B::display(A obj)
{
    cout << "From class A: \ny: " << obj.y << endl;
}

int main()
{
    A o1(2);
    B o2(8);
    o1.display(o2);
    o2.display(o1);
    return 0;
}