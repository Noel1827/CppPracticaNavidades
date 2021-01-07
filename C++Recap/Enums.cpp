#include <iostream>
using namespace std;

enum week{Monday,Tuesday,Wednesday,Thursday,Friday,Saturdar,Sunday};

int main(){
week day;
day = Friday;
cout << "Day: " << day+1 << endl;

    return 0;
}