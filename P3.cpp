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
    cout << "Enter number of students" << endl;
    int N;
    cin >> N;
    Student *s = new Student[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Details of " << i + 1 << "th student" << endl;
        cout << "Enter name of student" << endl;
        cin >> s[i].name;
        cout << "Enter roll number" << endl;
        cin >> s[i].rollno;
        cout << "Enter CGPA" << endl;
        cin >> s[i].cgpa;
        cout << "Enter department" << endl;
        cin >> s[i].department;
    }
    for (int i = 0; i < N; i++)
    {
        cout << "Details of " << i + 1 << "th student" << endl;
        cout <<"Name: "<< s[i].name << endl;
        cout <<"Roll no: "<< s[i].rollno << endl;
        cout <<"CGPA: "<< s[i].cgpa << endl;
        cout <<"Department: "<< s[i].department << endl;
    }
    return 0;
}