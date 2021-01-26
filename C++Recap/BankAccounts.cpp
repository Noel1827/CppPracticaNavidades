#include <iostream>
#include <Savings.h>

using namespace std;
static int tries = 3;
bool Access()
{
    int password;
    cout << "Type the four digit password you have " << tries << " tries." << endl;
    cin >> password;
    if (tries > 1 )
    {
        if (password == 1234)
            return true;
        else
        {
            cout << "Try Again" << endl;
            tries--;
            return Access();
        }
    }else return false;
}

int main()
{
    

    while (true)
    {
        if (Access())
        {
            cout << "We have " << ;
            break;
        }else break;
    }
    cout << "You are out of the loop";

    return 0;
}