#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    
    // check voting eligibility
    if (age >= 18) {
        cout << "you can vote.\n";
    } else {
        cout << "you can't vote.\n";
    }

    return 0;
}