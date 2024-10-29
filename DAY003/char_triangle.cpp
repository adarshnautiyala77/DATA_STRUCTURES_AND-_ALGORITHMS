#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Number of rows in the triangle
    char ch = 'A';  // Starting character

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;  // Move to the next character
        }
        cout << endl;
    }

    return 0;
}

