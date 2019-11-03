#include <iostream>

using namespace std;

class Students
{
    string name;
    int age;
    int rollno;
    float marks;
    int group;

public:
    void getData()
    {
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Enter age" << endl;
        cin >> age;
        cout << "Enter roll no" << endl;
        cin >> rollno;
        cout << "Enter marks" << endl;
        cin >> marks;
        if (rollno >= 5 && marks >= 70)
        {
            group = 1;
        }
        else
            group = 2;
    }
    void putData()
    {
        cout << "Name: " << name << endl
             << "Age: " << age << endl
             << "Roll no: " << rollno << endl
             << "marks: " << marks << endl;
    }
    int check()
    {
        if (group == 1)
            return 1;
        else
        {
            return 2;
        }
    }
};
int main()
{
    cout << "Enter number of students" << endl;
    int n;
    cin >> n;
    Students *s = new Students[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of " << i + 1 << "th student" << endl;
        s[i].getData();
    }
    cout << "Group 1" << endl;
    for (int i = 0; i < n; i++)
    {
        if (s[i].check() == 1)
        {
            s[i].putData();
        }
    }
    cout << endl;
    cout << "Group 2" << endl;
    for (int i = 0; i < n; i++)
    {
        if (s[i].check() == 2)
        {
            s[i].putData();
        }
    }
}