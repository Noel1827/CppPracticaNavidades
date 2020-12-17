#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int i = 0;
    while (i < 4)
    {

        if (i == 2)
        {
            i++;
            continue;
        }
        cout << "printed" << i << endl;
        i++;
    }

    return 0;
}