#include<iostream>
using namespace std;

int main(){
    int marks[5]={11,54,78,65,75};
    int size = 5;
    int sz = sizeof(marks)/sizeof(int);
    cout << sz << endl;
    return 0;
}