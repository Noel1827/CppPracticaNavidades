#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking ..." << endl;
    }
};

class shapeshifter : public Dog
{
public:
    void fly()
    {
        cout << "I'm flying bitchessss" << endl;
    }
};

int main()
{

  shapeshifter s1;
  s1.fly();
    return 0;
}