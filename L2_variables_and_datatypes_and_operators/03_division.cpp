#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "enter a: ";
    cin >> a; 
    cout << "enter b: ";
    cin >> b;

    //  output will be 0 in integer divisionif a < b ( e.g., 2/5 = 0 )
    // to get exect decimal output , we typecast one of the operands to float or double
    cout << "division of a and b is: " << (float) a/b << endl;
    return 0;
}
