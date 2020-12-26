#include <iostream>
using namespace std;

// int main()
// {
//     string str1 = "This is C language";
//     string str2 = "C++";

//     cout << "Before replacement, string is :" << str1 << endl;
//     str1.replace(8, 1, str2);
//     cout << "After replacement, string is: " << str1 << endl;
//     return 0;
// }

// int main(){
//     string str1 = "This is C language";
//     string str3 = "java language";

//     cout << "Before replacement, String is " << str1 << endl;
//     str1.replace(8,1,str3,0,4); // start at 8 of str1, replace 1 char, add str3 but start it from 0, 4
//     cout << str1;
// }

int main(){
    string str1 = "This is C language";
    cout <<str1 << endl;
    str1.replace(8,1,"C++",2);
    cout << str1;
}
