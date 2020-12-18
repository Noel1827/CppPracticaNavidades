#include <iostream>
using namespace std;

class Account
{

public:
    int accno;
    string name;
    static float rateOfInterest;//  Static member and you need to initialize before main
    static int count; // static member that you need to initialize before main

    Account(int accno, string name)
    {
        this->accno = accno;
        this->name = name;
        count++;// it will be counted everytime you create an object because this is not property of each individual object
    }
    void display()
    {
        cout << accno << " " << name << " " << rateOfInterest << endl;
    }
};

float Account::rateOfInterest = 6.5; // initialize to 6.5
int Account::count = 0; // initialize it to 0
int main()
{
    Account a1 = Account(201, "Sanjay");
    Account a2 = Account(202, "Nakul");
    Account a3 = Account(203, "Ranjana");
    a1.display();
    a2.display();
    a3.display();

    cout << "Total Objects Are: " << Account::count; // asks for the count integer

    return 0;
}