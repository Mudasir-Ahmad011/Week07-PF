#include<iostream>
using namespace std;
void printTable(int number);
main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    printTable(number);

}
void printTable(int number) {
    for (int n = 1; n <= 10;n++) {
        cout << number << "*" << n << "=" << number * n << endl;
    }
}