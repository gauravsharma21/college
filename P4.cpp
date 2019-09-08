#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    char name[50];
    int empid;
    int age;
    float exp;
    int bonus;
public:
    void getData()
    {
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Enter empid" << endl;
        cin >> empid;
        cout << "Enter age" << endl;
        cin >> age;
        cout << "Enter experience" << endl;
        cin >> exp;
        bonus = 1000;
    }
    void putdata()
    {
        cout << name << " " << empid << " " << age << " " << exp << endl;
    }
    void setBonus(){
        if(exp > 2)
            bonus = 5000;
    }
};

int main()
{
    int n;
    Employee e1;
    Employee e2[10];
    e1.getData();
    e1.putdata();
    cout << "Enter no. of employees" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        e2[i].getData();
    }
    for (int i = 0; i < n; i++)
    {
        e2[i].putdata();
    }
    return 0;
}