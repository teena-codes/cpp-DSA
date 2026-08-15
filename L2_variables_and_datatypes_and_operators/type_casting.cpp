#include <iostream>
using namespace std;

int main() {
    double weight = 75.99;

    // output will be 75, not 76
    int regularweight = (int)weight;

    cout << "converted regular weight: " << regularweight << endl; 
    
    return 0;                      
}