#include <iostream>
using namespace std;

int main()
{
    int number, temp, reminder, reverse=0;
    cout << "Enter the number: " << endl;
    cin >> number;
    temp = number;
    while (number > 0)
    {
        reminder = number % 10;
        reverse = (reverse * 10) + reminder;
        number /= 10;
    }
    if (temp == reverse)
    {
        cout << "Palindrome" << endl;
    }
    else
        cout << "Not palindrome" << endl;

    return 0;
}