#include <iostream>

using namespace std;

class Programmer{

    public:
    int id;
    string name;

    Programmer(int id, string name){
        this->name = name;
        this->id = id;
    }

    Programmer(Programmer &d){
        id = 102;
        name = d.name;
    }
    void display(){
        cout << name << " " << id << endl;
    }
};

int main(){

    Programmer a1(102, "Noel");
    Programmer a2 = a1;

    a1.display();
    a2.display();

    return 0;
}