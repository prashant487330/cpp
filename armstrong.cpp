#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, originalNum, remainder, digits = 0;
    double result = 0.0;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;
    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }
    originalNum = num;
    // Calculate Armstrong sum
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }
    if ((int)result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
    return 0;
}