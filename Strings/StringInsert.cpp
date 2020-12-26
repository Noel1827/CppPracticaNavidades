#include <iostream>
using namespace std;

// int main(){
//     string str1 = "javat tutorial";
//     cout << "String contains :" << str1 << endl;
//     str1.insert(5,"point");
//     cout << str1;
// }

// int main(){
//     string str1 = "C++ is a language";
//     string str2 = "programming";
//     cout << str1 << endl;
//     cout << str1.insert(9,str2,0,11);
//     cout << str1;
// }

int main(){
    string str = "Maths is  favourite subject";
    cout << "String contains :" << str << endl;
    str.insert(9,"my",2);
    cout << str;
}