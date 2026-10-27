#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {   //outer
        int num = 1;
        for (int j = 1; j <= n; j++) {   //inner
            cout << num << " ";
            num++;
        }
        cout << endl;

        // if n = 4, then the output will be: //  1 2 3 4
        //                                        1 2 3 4 
        //                                        1 2 3 4
        //                                        1 2 3 4 

    }
    return 0;
}