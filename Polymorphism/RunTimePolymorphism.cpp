#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "eating" << endl;
    }
};

class Dog : public Animal
{
public:
    void eat()
    {
        cout << "Eating bread..." << endl;
    }
};

int main()
{

    Dog d = Dog();
    d.eat();
    return 0;
}