#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int number;
    cin >> number;

    for (int i = number; i > 0; i--)
    {

        cout << i << endl;
        if (i % 5 == 0)
        {
            cout << "Beep" << endl;
        }
    }

    return 0;
}