#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for(int i=1; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}
/* OUTPUT 
Enter number of elements in the array:  5
Enter 5 elements: 04 03 11 05 14 
Maximum element: 14
Minimum element: 3
*/
