#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main(){
int arr[5] = {1,2,3,4,5};
// for(int i = 0;i < 5; i++){
//     cout << arr[i] << "\t";
// }

// for(int i: arr){
//     cout << i << endl;
// }

string arrt[5] = {"Hello" , "Bitch" , "Puta", "Noel" , "Tommy es un maldito "};

for(string i: arrt){
    cout << i << endl;
}
return 0;
}