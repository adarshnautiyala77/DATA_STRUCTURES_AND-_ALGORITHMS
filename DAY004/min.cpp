#include<iostream>
using namespace std;

int min(int a , int b){
    if (a<b){
        return a;
    }
    else return b;
}
int main(){
    int a = 2;
    int b = 4;
    cout << min(a,b);
}