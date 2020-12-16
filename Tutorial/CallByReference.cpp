#include <iostream>
#include <string>
#include <vector>
using namespace std;
void swap(int* y, int* x){
    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
}
int main()
{
    int x = 500;
    int y = 100;
    swap(&x, &y);
    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;
    return 0;
}