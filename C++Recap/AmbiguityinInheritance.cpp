#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "Class A" << endl;
    }
};

class B
{
public:
    void display()
    {
        cout << "Class B" << endl;
    }
};

class C : public A, public B
{
    void view()
    {
        A::display();
        B::display();
    }
};

int main()
{
    C c;
    c.A::display();
    c.B::display();
    return 0;
}