#include <iostream>
using namespace std;
struct Student
{
    char name[50];
    int rollno;
    float cgpa;
    char department[10];
};
int main()
{
    Student s;
    cout << "Enter name of student" << endl;
    cin >> s.name;
    cout << "Enter roll number" << endl;
    cin >> s.rollno;
    cout << "Enter CGPA" << endl;
    cin >> s.cgpa;
    cout << "Enter department" << endl;
    cin >> s.department;
    cout << "Details of the student" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll number: " << s.rollno << endl;
    cout << "CGPA: " << s.cgpa << endl;
    cout << "Department: " << s.department << endl;
    return 0;
}