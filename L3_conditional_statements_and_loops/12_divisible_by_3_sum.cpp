#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for (int i = 3; i <= n; i += 3) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
} 