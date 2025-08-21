#include<iostream>
using namespace std;
int main() {
    int arr[5], num, found = 0;
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> num;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == num) {
            found = 1;
            break;
        }
    }

    if(found)
        cout << num << " is present in the array." << endl;
    else
        cout << num << " is not present in the array." << endl;

    return 0;

}
/* OUTPUT
Enter 5 integers: 11 02 26 04 05
Enter number to search: 20
20 is not present in the array.
    */
