#include <iostream>

using namespace std;

class Students
{
    int rollno;
    float marks;
    int group;

public:
    void getData()
    {
        cout << "Enter roll no" << endl;
        cin >> rollno;
        cout << "Enter marks" << endl;
        if (rollno >= 5 && marks >= 70)
        {
            group = 1;
        }
        else
            group = 2;
    }
    void putData()
    {
        cout << rollno << " " << marks << endl;
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
    //hey
    Students s[10];
    for (int i = 0; i < 10; i++)
    {
        s[i].getData();
    }
    cout << "Group 1" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (s[i].check() == 1)
        {
            s[i].putData();
        }
    }
    cout << "Group 2" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (s[i].check() == 2)
        {
            s[i].putData();
        }
    }
}