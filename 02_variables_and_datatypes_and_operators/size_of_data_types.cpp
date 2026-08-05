#include <iostream>
using namespace std;

int main() {
    cout << "size of int: " << sizeof(int) << " bytes" << endl;
    cout << "size of float: " << sizeof(float) << " bytes" << endl;
    cout << "size of double: " << sizeof(double) << " bytes" << endl;
    cout << "size of char: " << sizeof(char) << " bytes" << endl;

    // terminal output will be:
    // size of int: 4 bytes
    // size of float: 4 bytes
    // size of double: 8 bytes
    // size of char: 1 byte

    return 0;
}
