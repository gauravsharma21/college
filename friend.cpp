#include <iostream>
using namespace std;
class B;
class A
{
    int a;
    friend class B;

public:
    A() { a = 0; }
    A(int x) { a = x; }
    void showB(B &x);
};
class B
{
    int b;
    friend class A;

public:
    B() { b = 0; }
    B(int y) { b = y; }
    void showA(A &y);
};
void A::showB(B &x)
{
    cout << "B: " << x.b << endl;
}
void B::showA(A &y){
    cout << "A: " << y.a << endl; 
}

int main(){
    A a(2);
    B b(3);
    a.showB(b);
    b.showA(a);
    return 0;
}