#include <iostream>
using namespace std;

int main() {
    int arr[] = {109, 99, 23, 45, 23, 2, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j]   = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    cout << "Sorted numbers in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
