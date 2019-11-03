#include <iostream>
#include <string.h>
using namespace std;
class str
{
public:
    char a[20];
    str() { strcpy(a, ""); }
    str(char s[]) { strcpy(a, s); }
    str operator+(str &s)
    {
        str temp;
        strcat(a, s.a);
        strcpy(temp.a, a);
        return temp;
    }
};

int main()
{
    str a("Hello");
    str b("World");
    str c;
    c = a + b;
    cout << c.a;
    return 0;
}