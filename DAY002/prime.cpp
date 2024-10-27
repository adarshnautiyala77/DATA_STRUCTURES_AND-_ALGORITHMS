#include<iostream>
using namespace std;

int main(){
    int n = 7;
    bool isPrime = true;

    for ( int i = 2; i<=n-1 ; i++ ){ // i*i<=n
        if (n%i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime==true){
        cout << "prime number";
    }else{
        cout << "non prime";
    }
    return 0;
}
