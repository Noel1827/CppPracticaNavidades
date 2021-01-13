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
            arr[i] = arr[pIndex];
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
    if (start < end){
        int pivot = partition(arr, start, end);
        quicksort(arr,start,pivot-1);
        quicksort(arr,pivot+1,end);
    }
}

void quicksort(vector<int> &arr)
{
    quicksort(arr, 0, arr.size() - 1);
}

int main()
{
    vector<int> arr = {11, 2, 3, 99, 0, 49, 98};
    quicksort(arr);

   for(int i = 0; i < arr.size(); i++){
       cout << arr[i] << " ";
   }
}