#include <iostream>

using namespace std;

int main()
{

    int n;
    bool notprime = true;

    cout << "Enter the number:" << endl;
    cin >> n;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << "The Number is NOt PRIME";
            notprime = false;
            break;
        }
    }
    if (notprime)
    {
        cout << "The Number is prime";
    }
    return 0;
}