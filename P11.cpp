#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A() { x = 0; }
    A(int a) { x = a; }
    friend int add(A, A);
};
int add(A o1, A o2)
{
    return o1.x + o2.x;
}
int main()
{
    A obj1(5), obj2(12);
    int ans = add(obj1, obj2);
    cout << "SUM: " << ans << endl;
    return 0;
}