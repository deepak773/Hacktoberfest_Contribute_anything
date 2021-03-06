#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int divisor, number_entered;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> number_entered;

    // 0 and 1 are not prime numbers
    if (number_entered == 0 || number_entered == 1) {
        isPrime = false;
    }
    else {
        for (divisor = 2; divisor <= floor(sqrt(number_entered)); ++divisor) { //used the sqrt() method to reduce the iterations
            if (number_entered % divisor == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << number_entered << " is a prime number";
    else
        cout << number_entered << " is not a prime number";

    return 0;
}
