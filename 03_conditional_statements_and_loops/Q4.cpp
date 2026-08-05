#include <iostream>
using namespace std;

int main() {    //question is find sum of all odd numbers between 1 to 50
int n = 50;
int oddsum = 0;
    for(int i = 1; i <=n; i++) {
    if(i%2 != 0) {
    oddsum += i ;
    }
}
    cout << "oddsum = " << oddsum << endl; 
    return 0; 
}          // terminal output is 625




