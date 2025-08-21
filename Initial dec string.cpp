#include <iostream>
#include <string>
using namespace std;

int main() {
    char a[4] = "ABC";
    char b[] = {'X', 'Y', 'Z', '\0'};
    char c[4] = {'P', 'Q', 'R', '\0'};
    string d = "MNO";

    cout << "Different ways to declare a string in C++:" << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
}
/* OUTPUT
Different ways to declare a string in C++:
ABC
XYZ
PQR
MNO
*/
