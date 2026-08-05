#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "enter age\n";
    cin >> age;
    
    if (age >=18) {
        cout << "you can vote\n";
    } else {
        cout << "you can't vote\n";
    }

    return 0;
}
// for output printing, if i enter age = 25, printout will be "you can vote"