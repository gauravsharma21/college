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
    Student s;
    cout << "Details of the student" << endl;
    cout << "Enter name of student" << endl;
    cin >> s.name;
    cout << "Enter roll number" << endl;
    cin >> s.rollno;
    cout << "Enter marks" << endl;
    cin >> s.marks;
    cout << "Enter department" << endl;
    cin >> s.department;
    cout << "Details of the student" << endl;
    cout << s.name << " " << s.rollno << " " << s.marks << " " << s.department << endl;
    return 0;
}