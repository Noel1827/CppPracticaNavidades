#include <iostream>
using namespace std;

int main(){
    int test,reverse=0,lastnum;
    cout << "Enter the number" << endl;
    cin>> test;
    while (test > 0){
        lastnum = test%10;
        reverse = (reverse * 10) + lastnum;
        test /= 10;
    }
    cout << reverse << endl;
}