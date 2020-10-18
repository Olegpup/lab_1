#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Butyrskyi Oleh IS-01" << endl;
    double x, i, f;
    cout << "Enter the ccc.ddd number:" << endl;
    cin >> x;
    i = (x - (int)x) * 1000.0;
    f = (int)x / 1000.0;
    cout << i + f;
}