#include<iostream>
using namespace std;
int main() {
    int arr[5];
    cout << "Enter 5 integers: ";
    
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;

}
/* OUTPUT
Enter 5 integers: 11 23 26 04 05
Array elements are: 11 23 26 4 5
*/
