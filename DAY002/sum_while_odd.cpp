#include <iostream>
using namespace std;

int main() {
    int n = 50; // Calculate the sum of odd numbers up to 50
    int sum = 0; // Variable to store the sum
    int i = 1; // Counter variable starting from the first odd number

    // Calculate sum using while loop
    while (i <= n) {
        if (i % 2 != 0) { // Check if the number is odd
            sum += i; // Add the odd number to sum
        }
        i++; // Increment i by 1
    }

    // Output the result
    cout << "The sum of odd numbers up to 50 is: " << sum << endl;

    return 0;
}
