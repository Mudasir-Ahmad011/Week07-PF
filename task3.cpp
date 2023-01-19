#include<iostream>
using namespace std;
int totalDigits(int number);
main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    cout << totalDigits(number);

}
int totalDigits(int number) {
    int sum = 0;

    while (number > 0) {
        number = number / 10;
        sum = sum + 1;
    }
    return sum;
}