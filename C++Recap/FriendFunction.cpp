// #include <iostream>
// using namespace std;

// class Box
// {
// private:
//     int lenght;

// public:
//     Box() : lenght(0){};
//     friend int printLength(Box);
// };

// int printLength(Box b)
// {
//     b.lenght += 10;
//     return b.lenght;
// }

// int main()
// {
//     Box b;
//     cout << "Lenght of the box: " << printLength(b) << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

class Bitch
{
private:
    string name = "Noel", age = "19", city = "Hormigueros";

public:
    friend string GetWhatever(Bitch b, string d);
};

string GetWhatever(Bitch b, string d)
{
    if (d == "name")
    {
        return b.name;
    }
    else if (d == "age")
    {
        return b.age;
    }
    else if (d == "city")
    {
        return b.city;
    }
    else
        return "BITCH ENTER A NAME, AGE OR CITY";
}

int main()
{
    Bitch Alondra;
    cout << GetWhatever(Alondra, "city");
    return 0;
}