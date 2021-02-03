#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string perm1, perm2;
    cin >> perm1 >> perm2;
   
    vector<char> permvector;
    bool permutation = false;
    if (perm1.length() == perm2.length())
    {
        for(int i = 0; i < perm1.size(); i++){
            for(int j = 0; j < perm2.size(); j++){
                if(perm1.at(i) == perm2.at(j)){
                    perm2.erase(perm2.begin() + j);
                    break;
                }
            }
        }
        if(perm2.empty()){
            permutation = true;
        }
    }

    if (permutation)
    {
        cout << "true";
    }
    else
        cout << "false";

    return 0;
}