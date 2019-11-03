#include <iostream>
using namespace std;
class A
{
    int num;

public:
    A() { num = 0; }
    A(int x) { num = x; }
    int operator*(A a)
    {
        return this->num * a.num;
    }
};
int main()
{
    int a, b;
    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    A a1(a);
    A a2(b);
    cout << "Product: " << a1 * a2 << endl;
    return 0;
}