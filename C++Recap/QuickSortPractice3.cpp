#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
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

void quicksort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pivot = partition(arr, start, end);
        quicksort(arr, start, pivot - 1);
        quicksort(arr, pivot + 1, end);
    }
}

int main()
{
    int arr[5] = {2, 45, 34, 90, 45};
    quicksort(arr, 0, 4);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}