#include <iostream>
#include <vector>

using namespace std;
int findLargest(vector<int>&a);

int main(){

// int a = 10;
// int &ref = a;

// cout << ref << endl;
// ref = 20;

vector<int> vec = {1,22,30,45,99};
cout << findLargest(vec);

}
int findLargest(vector<int>& a){
    int largest = a.at(0);
    int position = 0;
    for (int i = 1; i < a.size(); i++)
    {
        if (largest < a.at(i))
        {
            largest = a.at(i);
            position = i;
        }
    }
    return a[position];
}
