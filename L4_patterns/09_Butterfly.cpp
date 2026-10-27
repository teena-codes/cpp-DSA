#include<iostream>
using namespace std;

int main() {
    int n = 4;
    // top part
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= i+1; j++) {
            cout << "*";
        }
        if(i != n-1) {
            for(int j = 0; j < 2*(n-i-1); j++) {
                cout << " ";
            }
        }
            for(int j = 1; j <= i+1; j++) {
                cout << "*";
            }
            cout << endl;
        }

        // bottom part
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n-i; j++) {
                cout << "*";
            }
            if(i != 0) {
                for(int j = 0; j < 2*i; j++) {
                    cout << " ";
                }
            }
            for(int j = 0; j < n-i; j++) {
                cout << "*";
            }
            cout << endl;
        }
        return 0;
    }

    // output
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *