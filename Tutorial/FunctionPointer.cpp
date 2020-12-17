#include <iostream>
#include <vector>

using namespace std;
// int findLargest(vector<int>&a);
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int(*funptr)(int,int);
    funptr = add;
    int sum = funptr(5,5);
    cout << "Value of sum: " << sum << endl;

    // cout << &main << endl;
    return 0;
}