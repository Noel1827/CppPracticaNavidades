#include <iostream>

using namespace std;

int main()
{

    int number = 11, i = 0;
    bool divisible;
    while (true)
    {
        divisible = true;
        for (i = 1; i <= 10; i++)
        {
            if (number % i == 0)
                continue;
            divisible = false;
        }

        if (divisible)
            break;
            number++;
    }

    cout << "The smallest number that can be divided by all numbers is: " << number << endl;
}