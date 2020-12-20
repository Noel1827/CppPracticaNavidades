#include <iostream>
#include <vector>

using namespace std;

class Account
{
public:
    float salary = 60000;
};
class Programmer : public Account
{
public:
    float bonus = 5000;
};

int main()
{
    Programmer p1;
    cout << p1.salary << endl;
    cout << p1.bonus << endl;
}