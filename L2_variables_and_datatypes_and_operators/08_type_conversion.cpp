#include <iostream>
using namespace std;

int main() {
    char grade = 'A';

    // implicit type conversion: char to its ASCII int value
    int number = grade;

    cout << "converted number: " << number << endl; 

    // printed output will be 65 because the ASCII value of 'A' is 65
    
    return 0;
}