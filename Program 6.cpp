#include <iostream>
using namespace std;

int main() {
    int num, temp, sum = 0;

    cout << "Enter a positive number: ";
    cin >> num;

    temp = num; // Store original number

    // Compute sum of digits using a do...while loop
    do {
        sum += temp % 10; // Add last digit to sum
        temp /= 10;       // Remove last digit
    } while (temp > 0);

    cout << "The sum of the digits is: " << sum << endl;

    // Check divisibility
    cout << num << (num % 2 == 0 ? " is" : " is not") << " divisible by 2" << endl;
    cout << num << (sum % 3 == 0 ? " is" : " is not") << " divisible by 3" << endl;
    cout << num << (num % 4 == 0 ? " is" : " is not") << " divisible by 4" << endl;
    cout << num << (num % 5 == 0 ? " is" : " is not") << " divisible by 5" << endl;
    cout << num << (num % 6 == 0 ? " is" : " is not") << " divisible by 6" << endl;
    cout << num << (num % 7 == 0 ? " is" : " is not") << " divisible by 7" << endl;
    cout << num << (num % 8 == 0 ? " is" : " is not") << " divisible by 8" << endl;
    cout << num << (sum % 9 == 0 ? " is" : " is not") << " divisible by 9" << endl;

    return 0;
}
