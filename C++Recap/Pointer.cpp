#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
// swapping values without a third variable
int a = -40; int b = 20; 

a = a+b;
b = a-b;
a = a-b;

cout << a << " " << b << endl;
    return 0;
}