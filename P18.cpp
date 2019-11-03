#include <iostream>
using namespace std;
class Base
{
public:
    int x;
    void display()
    {
        cout <<"X ="<< x << endl;
    }
};
class Derive : public Base
{
public:
    int y;
    void display()
    {
        cout <<"X ="<< x << endl;
        cout <<"Y ="<< y << endl;
    }
};
int main()
{
    Base B1;
    Base *ptr;
    ptr = &B1;
    ptr->x = 10;
    ptr->display();
    Derive D1;
    Derive *ptr1;
    ptr1 = &D1;
    ptr1->x = 10;
    ptr1->y = 20;
    ptr1->display();
}