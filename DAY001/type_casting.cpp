#include<iostream>
using namespace std;

//big datatype to small datatype
//explicit typecasting
int main(){
    double price = 100.99;

    int newPrice = (int)price; 
    cout << newPrice ; //100
    return 0;
}