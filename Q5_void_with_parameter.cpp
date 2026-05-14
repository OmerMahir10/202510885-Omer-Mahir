#include <iostream>
using namespace std;

void displaySquare(int number) {
    cout << "The square of " << number << " is " << (number * number) << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    displaySquare(n);
    return 0;
}
