#include <iostream>

using namespace std;

int main()
{

    int ar[] = {2, 4, 9, 4, 9, 0, 10};
    bool repeat;

    for (int i = 0; i < 6; i++)
    {
        cout << ar[i];
    }
    cout << endl;

    while (true)
    {
        repeat = true;
        for (int i = 0; i < 6 - 1; i++)
        {
            if (ar[i] > ar[i + 1])
            {
                int temp = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = temp;
                repeat = false;
            }
        }

        if (repeat == true)
            break;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << ar[i];
    }
    return 0;
}