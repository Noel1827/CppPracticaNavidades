#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[end];
    int pIndex = start;

    for(int i = start; i < end; i++){
        if(arr[i] < pivot){
            int temp = arr[i];
            arr[i]= arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }
    int temp = arr[end];
    arr[end] = arr[pIndex];
    arr[pIndex] = temp;

    return pIndex;
}
void quicksort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int pivot = partition(arr, start, end);
        quicksort(arr, start, pivot - 1);
        quicksort(arr, pivot + 1, end);
    }
}

void quicksort(vector<int> &arr)
{
    quicksort(arr, 0, arr.size());
}

int main()
{
    vector<int> arr = {3, 65, 4, 76, 2, 4, 6, 7, 4, 8, 2, 9, 12, 14};

    quicksort(arr, 0,arr.size()-1);


    for(int i = 0; i < arr.size(); i++){
        cout << arr.at(i)<< " ";
    }

    return 0;
}






// int findmiddle(int a, int b, int c)
// {
//     if ((a > b && a < c) || (a < b && a > c))
//         return a;
//     if ((b > a && b < c) || (b < a && b > c))
//         return b;

//     if ((c > a && c < b) || (c < a && c > b))
//         return c;
// }
