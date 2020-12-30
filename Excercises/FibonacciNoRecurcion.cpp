#include <iostream>
using namespace std;

int main()
{
    cout << "Tell me the size of the number you want baby";
    int number;
    cin >> number;
    int first = 0;
    int second = 1;
    int sum = 0;

    for (int i = 2; i < number; i++)
    {
        sum = first + second;
        first = second;
        second = sum;
    }
    cout << "Your fibonnaci is: " << sum << endl;

    return 0;
}