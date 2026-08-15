#include <iostream>
using namespace std;

int main () {
    char c;
    cout << "enter a character:";
    cin >> c;
    if( c >= '65' && c <= '90' ) {
        cout << "uppercase\n";
    } else {
        cout << "lowercase\n";
    }
    return 0;
}