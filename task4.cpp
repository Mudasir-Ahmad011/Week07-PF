#include<iostream>
using namespace std;
int frequencyChecker(int number, int digit);
main() {
    int numbers, digit;
    cout << "Enter the numbers: ";
    cin >> numbers;
    cout << "Enter digit: ";
    cin >> digit;
    int sum = frequencyChecker(numbers, digit);
    cout << sum;

}
int frequencyChecker(int number, int digit) {
    int sum = 0;
    while (number > 0) {
        int  mod = number % 10;
        number = number / 10;
        if (mod == digit) {
            sum = sum + 1;
        }
    }
    return sum;
}
