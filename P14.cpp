#include<iostream>
using namespace std;
#include<string.h>
class A{
    char str[50];
    public:
        A() { strcpy(str, "");}
        A(char s[]){ strcpy (str, s);}
    A operator+ (A a){
        A temp;
        strcat(this->str, a.str);
        strcpy(temp.str, this->str);
        return temp;
    }
    void print(){
        cout<<str<<endl;
    }
};

int main(){
    char str1[50], str2[50];
    cout<<"Enter first string"<<endl;
    cin>>str1;
    cout<<"Enter second string"<<endl;
    cin>>str2;
    A a(str1);
    A b(str2);
    A c = a + b;
    c.print();
}