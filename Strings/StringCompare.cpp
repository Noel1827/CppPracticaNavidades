#include <iostream>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "javatpoint";
    int k = str1.compare(str2);

    if (k == 0)
    {
        cout << "Both the strings are equal";
    }
    else
        cout << "Both the strings are unequal";
}