#include<iostream>
using namespace std;

int main(){

    for(int i=0;i<5;i++){ //outer 
        for(int j=0;j<i;j++){ //inner
            cout << i ;
        }
        cout<<"\n";
    }
    return 0;
}