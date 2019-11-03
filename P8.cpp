#include <iostream>
using namespace std;
class Shape
{
    float l;
    float b;

public:
    Shape()
    {
        l = b = 0;
    }
    Shape(float a)
    {
        l = b = a;
    }
    Shape(float a, float c)
    {
        l = a;
        b = c;
    }
    void display()
    {
        cout << "length: " << l << endl << "breadth: "<< b << endl;
    }
};
int main()
{
    Shape a;
    cout<<"A: \n";
    a.display();
    Shape b(2.4);
    cout << "B: \n";
    b.display();
    Shape c(2.4, 4.8);
    cout << "C: \n";
    c.display();
    return 0;
}