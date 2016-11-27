#include <iostream>
using namespace std;

int main()
{
        for (int i = 10; i <= 15; i++)
    {
        if (i == 11 || i == 13 || i== 15)
            cout << "*";
        else
            cout << "!";
    }
}
