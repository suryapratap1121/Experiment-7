#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    int i = 0;
    while (i < n / 2 && str[i] == str[n - i - 1]) {
        i++;
    }

    if (i == n / 2)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
/*OUTPUT 
Enter a string: HANNAH
The string is a palindrome.
*/
