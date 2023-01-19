#include<iostream>
using namespace std;
int sum_of_number(int number);
main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    cout << sum_of_number(number);

}
int sum_of_number(int number) {
    int remainder = 0;
    int sum = 0;
    while (number > 0) {
        remainder = number % 10;
        number = number / 10;
        sum = sum + remainder;
    }
    return sum;
}