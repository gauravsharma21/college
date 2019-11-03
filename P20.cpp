#include <iostream>
using namespace std;
void MyHandler()
{
    try
    {
        throw "hello";
    }
    catch (const char *)
    {
        cout << "Caught exception inside MyHandler\n";
        throw;
    }
}
int main()
{
    cout << "Main start\n";
    try
    {
        MyHandler();
    }
    catch (const char *)
    {
        cout << "Caught exception inside Main\n";
    }
    cout << "Main end";
    return 0;
}