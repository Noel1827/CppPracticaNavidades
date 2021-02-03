#include <iostream>
#include <vector>
using namespace std;
void checkRepeat(vector<string> &arr)
{

    // for(int i = 0; i < arr.size(); i++){
    //     for(int j = i; j < arr.size(); j++){
    //         if(arr[i] == arr[j+1]){
    //             arr.erase(arr.begin()+j);
    //         }
    //     }
    // }
}

int main()
{
    // create the array for user input, rember to get the size!!!, THE TARGET TOOO ,
    // int size, k = 0, number = 0, target,j;
    // cout << "Enter the size of the array"<< endl;
    // cin >> size;
    // int arr[size];
    // while (k < size){
    //     cout << "Enter the next number" << endl;
    //     cin >> number;
    //     arr[k] = number;
    //     system("cls");
    //     k++;}
    // cout << "This is your array [";
    // for (int a : arr){
    //     cout << a << ",";
    // }
    // cout << "] \n";
    int target, size = 7, j; // BORRA
    int arr[size] = {3, 2, 5, 6, 3, 5, 3};
    cout << "Enter your target O.O" << endl;
    cin >> target;

    int sum = 0;
    vector<string> coords;

    for (int i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            sum = arr[i] + arr[j];
            if (sum == target)
            {
                coords.push_back("(" + to_string(arr[i]) + "," + to_string(arr[j]) + ") ");
            }
        }
    }
    checkRepeat(coords);

    for (string b : coords)
    {
        cout << b;
    }

    return 0;
}