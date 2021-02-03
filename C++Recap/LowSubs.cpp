#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[]{1, 15, 3, 11, 2}, arr2[] = {23, 127, 235, 19, 8};
    int difference = 0, lowest,fn,ln;
    bool permission = true;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            difference = arr[i] - arr2[j];
            if (difference > 0){
                if (permission){
                    lowest = difference;
                    permission = false;
                }
                if (difference < lowest){
                    fn= arr[i];ln=arr2[j];
                    lowest = difference;
                }
            }
        }
    }
    cout << fn<<"-"<<ln<<"="<<lowest;
}
