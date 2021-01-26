#include <iostream>

using namespace std;

class Test
{
private:
    int b, c, d;

public:
    Test()
    {
        Test(0, 0, 0);
    }
    Test(int b)
    {
        Test(b, 0, 0);
    }
    Test(int b, int c)
    {
        Test(b, c, 0);
    }
    Test(int b, int c, int d)
    {
        this->b = b;
        this->c = c;
        this->d = d;
    }
    void display()
    {
        cout << b << " " << c << " " << d << " " << endl;
    }
};

int main()
{
Test b();

//YOU Cant do this!!!!


    return 0;
}