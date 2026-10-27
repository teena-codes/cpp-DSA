#include<iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 0; i < n; i++) {
            //for outer loop
        for(int j = 0; j < n-i-1; j++) {
            // for printing space which is j = n-(i+1)              
            cout << " ";
        }
        for(int j = 1; j <= i+1; j++) {
            cout << j;
        }
        for(int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;  
}
// output 
//    1
//   121
//  12321
// 1234321