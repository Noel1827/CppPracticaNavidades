#include <iostream>
#include <string>
using namespace std;
int main()
{
    int number;
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            number = j * i;
            cout << number << "\t";
        }
        cout << endl;
    }


    return 0;
}