#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main(){

// int test[3][3];  //declaration of 2D array   
//     test[0][0]=5;  //initialization   
//     test[0][1]=10;   
//     test[1][1]=15;  
//     test[1][2]=20;  
//     test[2][0]=30;  
//     test[2][2]=10; 

//    for(int i = 0; i < 3; i++){
//        for(int j = 0; j < 3; j++){
//            cout << test[i][j] << "\t";
//        }
//        cout << endl;
//    }
//     return 0;

int test[3][3]={
    {2,5,5},
    {4,0,3},
    {9,1,8},
};

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout << test[i][j] << "\t";
    }
    cout << endl;
}
}