#include<iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);

main() {
    int  number1, number2;
    cout << "Enter  the number: ";
    cin >> number1;
    cout << "Enter the number: ";
    cin >> number2;
    int gcd = calculateGCD(number1, number2);
    int lcm = calculateLCM(number1, number2, gcd);
    cout << "Greatest common divisor " << gcd << endl;
    cout << "Least common multiple " << lcm;
}
int calculateGCD(int number1, int number2) {
    int number = 1;
    int gcd;
    if (number1 < number2) {
        while (number < number2) {
            if (number1 % number == 0 && number2 % number == 0) {
                gcd = number;
            }
            number++;
        }
    }
    if (number1 > number2) {
        while (number < number1) {
            if (number1 % number == 0 && number2 % number == 0) {
                gcd = number;
            }
            number++;
        }
    }
    return gcd;
}
int calculateLCM(int number1, int number2, int gcd) {
    int lcm = (number1 * number2) / gcd;
    return lcm;
}