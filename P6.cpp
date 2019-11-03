#include <iostream>
using namespace std;
class student
{
    string name;
    int rollno;
    int age;
    float marks;

public:
    static int totalstuds;
    student(){}
    static int getTotal()
    {
        return totalstuds;
    }
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
        totalstuds++;
    }
};
int student::totalstuds = 0;

int main()
{
    cout << "Enter total number of students" << endl;
    int n;
    cin >> n;
    student *s = new student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Details of " << i + 1 << "th student" << endl;
        s[i].getData();
    }
    cout <<"total students are "<< student::getTotal();
}