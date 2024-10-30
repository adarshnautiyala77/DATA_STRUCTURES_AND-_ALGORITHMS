#include <iostream>
using namespace std;

int binTodecimal (int binum){
    int ans = 0 , pow = 1;

    while (binum>0){
        int rem = binum %10 ;
        ans += rem * pow;

        binum /= 10;
        pow *= 2;
    }
    return ans;
}

int main (){
    cout << binTodecimal(10) << endl;
    return 0 ;
}