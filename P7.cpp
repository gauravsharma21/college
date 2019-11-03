#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A()
    {
        a = 0;
        cout << "Object created" << endl;
    }
    ~A() { cout << "Object destroyed" << endl; }
};

int main(){
    A obj1, obj2, obj3;
    return 0;
}