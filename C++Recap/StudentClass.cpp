#include <iostream>
#include <vector>

using namespace std;
class Student
{
public:
    int id;
    string name;

    void insert(int i, string s){
        id = i;
        name = s;
    }
    void display(){
        cout << id << " " << name << endl;
    }
};

int main(){

// Student s1;
// s1.id = 203;
// s1.name = "Noel";

// cout << s1.name << endl;
// cout << s1.id << endl;

Student s1;
Student s2;
s1.insert(201, "Sonoo");
s2.insert(202, "Nakul");
s1.display();
s2.display();
return 0;
}