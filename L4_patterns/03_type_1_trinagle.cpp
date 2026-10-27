#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {      //because we want to print i+1 stars in each row so loop will run i+1 times
            cout << "*";
        }
        cout << endl;                    
    }
    return 0;
}