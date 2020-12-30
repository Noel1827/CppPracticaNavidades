#include <iostream>

using namespace std;

// HELPER FUNCTIONNNN PORQUE SE VUELVEN A INIZIALIZAR
int fibbonacihelper(int n, int first, int second)
{
    int sum, result;
    if (n > 0)
    {
        sum = first + second;
        first = second;
        second = sum;
        result = fibbonacihelper(n - 1, first, second);
    }
    if(n == 0){
        return second;
    }
}

int fibonacci(int n)
{
    return fibbonacihelper(n, 0, 1);
}
int main()
{
    int number;
    cout << "Enter the number ";
    // cin >> number;
    cout << fibonacci(15) << endl;

    return 0;
}
