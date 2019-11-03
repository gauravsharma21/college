#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
    string name;
    int empid;
    int age;
    float experience;
    int bonus;

public:
    void getData()
    {
        cout << "Enter name ";
        cin >> name;
        cout << "Enter empid ";
        cin >> empid;
        cout << "Enter age ";
        cin >> age;
        cout << "Enter experience ";
        cin >> experience;
        bonus = 5000;
    }
    void outputData()
    {
        cout << "Name: " << name << endl
             << "Empid: " << empid << endl
             << "Age: " << age << endl
             << "Experience: " << experience << endl
             << "Bonus: " << bonus << endl;
    }
    void setBonus()
    {
        if (experience > 3)
            bonus = 10000;
    }
    void updateName(string name)
    {
        this->name = name;
    }
};
int main()
{
    Employee e1;
    cout << "Enter Details of an employee " << endl;
    e1.getData();
    cout << "Details of the employee " << endl;
    e1.outputData();
    int n;
    cout << "Enter no. of employees to be stored in an array" << endl;
    cin >> n;
    Employee *emp = new Employee[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of employee " << i + 1 << endl;
        emp[i].getData();
        emp[i].setBonus();
    }
    char ans;
    cout << "Want to update name of some Employee? y or n" << endl;
    cin >> ans;
    if (ans == 'y')
    {
        cout << "Enter number of employee whose name is to be updated ";
        int index;
        cin >> index;
        string name;
        cout << "Enter new name ";
        cin >> name;
        emp[index - 1].updateName(name);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Details of employee " << i + 1 << endl;
        emp[i].outputData();
        cout << endl;
    }
    return 0;
}