#include <iostream>
using namespace std;

int factorial (int n){
    int fact = 1;

    for (int i = 1 ; i<=n ; i++) {
        fact *= i ;
    }
    return fact;
}
int nCr ( int n , int r ){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
    return fact_n / (fact_r * fact_nmr);
}
int main(){
    int n = 6 , r = 3;
    cout << nCr(n,r) << endl;

    return 0 ;
}

/*wap to check if an a number is prime or not
to print all prime nos from 1 to n 
to print n th fabonacci 
*/
