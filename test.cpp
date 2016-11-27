#include <iostream>
using namespace std;

int main()
{
    string msg = "Hello, world!";

    for (unsigned int i = 0; i < msg.length(); i++) {
        cout << i << ": " << msg[i] << endl;
    }
}
