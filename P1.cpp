#include <iostream>
#include <string.h>
using namespace std;

class student
{
    string name;
    int marks[3];

public:
    student()
    {
        this->name = "";
        for (int i = 0; i < 3; i++)
        {
            this->marks[i] = 0;
        }
    }
    void updateStudent(string name, int *marks)
    {
        this->name = name;
        for (int i = 0; i < 3; i++)
        {
            this->marks[i] = marks[i];
        }
    }

    void printName()
    {
        cout << name << "  ";
    }
    void printAverageMarks()
    {
        int sum = marks[0] + marks[1] + marks[2];
        cout << "Average Marks = " << sum / 3.0 << endl;
    }
    void updateMarks(int *marks)
    {
        for (int i = 0; i < 3; i++)
        {
            this->marks[i] = marks[i];
        }
    }
};
void printDetails(student *s, int n)
{
    cout << "The student's details are: " << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].printName();
        s[i].printAverageMarks();
    }
}
int main()
{
    cout << "Enter the number of students" << endl;
    int n;
    cin >> n;
    student *s = new student[n];
    for (int i = 0; i < n; i++)
    {
        string name;
        int marks[3];
        cout << "Enter the name of the student " << i + 1 << endl;
        cin >> name;
        cout << "Enter the marks in 3 subjects of the student " << i + 1 << endl;
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
        s[i].updateStudent(name, marks);
    }
    printDetails(s, n);
    char ans;
    cout << "Want to update marks of some student? y or n" << endl;
    cin >> ans;
    if (ans == 'y')
    {
        cout << "Enter Student Number whose Marks are needed to be updated ";
        int k;
        cin >> k;
        cout << "Enter the marks in 3 subjects of the " << k << " student ";
        int marks[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
        s[k - 1].updateMarks(marks);
        printDetails(s, n);
    }
}

