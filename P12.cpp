#include <iostream>
using namespace std;
class A
{
    int num;

public:
    A() { num = 0; }
    A(int x) { num = x; }
    friend int operator-(A, A);
};
int operator-(A a, A b)
{
    return a.num - b.num;
}
int main()
{
    int a, b;
    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    A a1(a);
    A a2(b);
    cout << "Difference " << a1 - a2 << endl;
    return 0;
}