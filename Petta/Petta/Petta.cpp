#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x, z, y, tmp;
    cin >> x >> z;

    char* ptr_x = &x[x.length() - 1];
    char* ptr_z = &z[z.length() - 1];

    while (ptr_z != &z[0] - 1)
    {
        //tmp.push_back(*ptr_z);
        tmp.insert(tmp.begin(), *ptr_z);
        if (*ptr_z != *ptr_x) { 
            y = tmp;
            ptr_z--;
            ptr_x = &x[x.length() - 1];
        }
        else if (ptr_x == &x[0]) {
            ptr_x = &x[x.length() - 1];
            ptr_z--;
        }
        else
        {
            ptr_z--;
            ptr_x--;
        }
    }

    cout << y;
}