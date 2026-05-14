#include <iostream>
using namespace std;

float addFourFloats(float a, float b, float c, float d) {
    return a + b + c + d;
}


int main() {
    float a, b, c, d;
    cout << "Enter 4 float numbers: ";
    cin >> a >> b >> c >> d;
    cout << "Sum = " << addFourFloats(a, b, c, d) << endl;
    return 0;
}
