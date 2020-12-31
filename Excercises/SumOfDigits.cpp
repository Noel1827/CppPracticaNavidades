#include <iostream>

using namespace std;

int main()
{
       int number, sum=0, lastnum;
    cout << "Enter the number: " << endl;
    cin >> number;

    while (number > 0)
    {
        lastnum = number % 10;
        sum += lastnum;
        number /= 10;
    }
    cout << sum;
}