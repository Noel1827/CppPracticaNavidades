#include <iostream>

using namespace std;

int cube(int n)
{
    return n * n * n;
}
int main()
{
    int sum = 0, lastnum, number, temp;
    cout << "Enter the number:" << endl;
    cin >> number;
    temp = number;

    while (number > 0)
    {
        lastnum = number % 10;
        sum += cube(lastnum);
        number /= 10;
    }

    if (temp == sum)
    {
        cout << "Armstrong";
    }
    else
        cout << "not armstrong";
}