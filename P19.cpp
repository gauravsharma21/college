#include<iostream>

using namespace std;

void test(int x) {
    try {
        if (x > 0)
            throw x;
        else if(x < 0)
            throw 'x';
        else
            throw .0;
    } catch (int x) {
        cout << "Caught a positive integer" << endl;
    } catch (char x) {
        cout << "Caught a negative integer"<< endl;
    } catch (double x) {
        cout << "Caught zero" << endl;
    }
}

int main() {
    test(10);
    test(0);
    test(-8);
    return 0;
} 