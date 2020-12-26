#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str = "javatpoint";
    cout << "String is:" << str << "\n";
    str.resize(55);
    str += "Hello";
      cout << "After resizing, string is " << str;
    return 0;
}
