#include <iostream>

using namespace std;

int main(){
    string str1 = "Dancing is my favourite hobby";
    string ar[] = {"lol", "bitch", "favorite"};
    cout << "String contains : " << str1 << endl;
    cout << "Position of the first occurrence of the string 'favourite' is " << str1.find_first_of("favorite");
    return 0;
}

// No lo entiendo muy bien