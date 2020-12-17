#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int random = 66;
    cout << random << endl;

    for (int i = 0; i < 1000; i++)
    {
        arr.push_back(i);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr.at(i) == random){
            cout << "The number is " << arr[i] << "at the position " << i << endl;
            break;
        }
    }
}