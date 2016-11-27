#include <iostream>

using namespace std;

int main()
{
    for (int outer = 1; outer < 4; outer++)
    {
        for (int inner = 1; inner < 4; inner++)
        {
            cout << outer << " " << inner << endl;
        }
    }
}
