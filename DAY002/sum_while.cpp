#include <iostream>
using namespace std;

int main() {
    int n = 50; 
    int sum = 0; 
    int i = 1; 

    // Calculate sum using while loop
    while (i <= n) {
        sum += i; // 
        i++; // 
    }

    cout << "The sum of the first 50 natural numbers is: " << sum << endl;

    return 0;
}
