#include <iostream>

using namespace std;

int main()
{
    int arr[10][10];
    int biggest = 0;
    int secondbiggest = 0;
    int sum = 0;
    int permission = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            int random = rand();
            arr[i][j] = random;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            sum += arr[i][j];
        }
        cout << "The sum of " << i << " = " << sum << endl;

        if (permission > 0)
        {
            secondbiggest = sum;
            if(biggest < secondbiggest){
                int temp = biggest;
                biggest = secondbiggest;
                secondbiggest = temp;
            }
        }
        else
        {
            biggest = sum;
        }
        permission = 1;
    }
    cout << "The biggest of the sums is: " << biggest << endl;
}