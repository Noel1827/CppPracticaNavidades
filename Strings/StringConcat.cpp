#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char key[25], buffer9[25];
    cout << "Enter the key string: ";
    cin.getline(key, 25);
    cout << "Enter the buffer string: ";
    cin.getline(buffer9, 25);
    strcat(key, buffer9);

    cout << "Key = " << key << endl;
    cout << "Buffer = " << buffer9 << endl;
    return 0;
}