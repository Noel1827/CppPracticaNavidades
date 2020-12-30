#include <iostream>

using namespace std;

int main()
{
    string problem = "Bob 45 Programmer";
    string name, age, title;
    int spaces = 0;
    int permission = 1;

    for (int i = 0; i < problem.size(); i++)
    {
        if (problem.at(i) == ' ')
        {
            switch (permission)
            {
            case 1:

                name.append(problem, spaces, i);
                spaces = i;
                permission++;
                break;

            case 2:
                permission++;
                age.append(problem, spaces, i);
                spaces = i;

                break;
            case 3:
                title.append(problem, spaces, problem.size() - spaces);
                break;
            }
        }
    }
    cout << name << age << endl;
}