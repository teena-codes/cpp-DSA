#include <iostream>
using namespace std;

int main() {    //question is check if a number is prime or non prime
    int n;
    cin >> n;
    for (int i = 2; i <= n-1; i++) {
    if (n%i==0) {  
       cout << "non prime\n";
    } else {
        cout << "prime\n";
    }

    }
    return 0;
    }