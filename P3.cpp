#include <iostream>
using namespace std;
struct Student
{
    char name[50];
    int rollno;
    float marks;
    char department[10];
};
int main()
{
    Student s[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Details of " << i + 1 << "th student" << endl;
        cout << "Enter name of student" << endl;
        cin >> s[i].name;
        cout << "Enter roll number" << endl;
        cin >> s[i].rollno;
        cout << "Enter marks" << endl;
        cin >> s[i].marks;
        cout << "Enter department" << endl;
        cin >> s[i].department;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Details of " << i + 1 << "th student" << endl;
        cout << s[i].name << endl;
        cout << s[i].rollno << endl;
        cout << s[i].marks << endl;
        cout << s[i].department;
    }
    return 0;
}