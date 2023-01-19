#include<iostream>
using namespace std;
void printPercentage(int number);
main() {
    int number;
    float p1, p2, p3, p4, p5;
    cout << "Enter the number: ";
    cin >> number;
    printPercentage(number);
}
void printPercentage(int number) {
    float p1 = 0.0, p2 = 0.0, p3 = 0.0, p4 = 0.0, p5 = 0.0;
    int num;
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
    for (int n = 1; n <= number;n++) {
        cout << "Enter the number: ";
        cin >> num;
        if (num == 1 || num < 200) {
            sum1 = sum1 + 1;
        }
        else if (num == 200 || num <= 399) {
            sum2 = sum2 + 1;
        }
        else if (num == 400 || num <= 599) {
            sum3 = sum3 + 1;
        }
        else if (num == 600 || num <= 799) {
            sum4 = sum4 + 1;
        }
        else if (num >= 800) {
            sum5 = sum5 + 1;
        }
    }
    p1 = sum1 * 100.0 / number;
    p2 = sum2 * 100.0 / number;
    p3 = sum3 * 100.0 / number;
    p4 = sum4 * 100.0 / number;
    p5 = sum5 * 100.0 / number;
    cout << p1 << "%" << endl << p2 << "%" << endl << p3 << "%" << endl << p4 << "%" << endl << p5 << "%" << endl;
}