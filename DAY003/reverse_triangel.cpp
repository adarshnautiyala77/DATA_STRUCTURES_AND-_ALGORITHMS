#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i=0;i<n;i++){ //outer 
        for(int j=i+1;j>0;j--){ //inner
            cout << j <<" " ;
        }
        cout<<"\n";
    }
    return 0;
}
