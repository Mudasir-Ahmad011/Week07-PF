#include<iostream>
#include<cmath>
using namespace std;
float calculatePrice(float money, int year);
main() {
    float money_inheritance;
    int year;
    cout << "Enter Inherited money: ";
    cin >> money_inheritance;
    cout << "Enter Year until he has to live in past: ";
    cin >> year;
    float remainORless = calculatePrice(money_inheritance, year);
    if (remainORless < 0) {
        cout << "He will need " << abs(remainORless) << " dollars to survive";
    }
    else if (remainORless > 0) {
        cout << "Yes! He will live carefree life and will have " << remainORless << " dollars left";
    }
}
float calculatePrice(float money, int year) {
    int  age = 18;
    for (int n = 1800; n <= year; n++) {
        if (n % 2 == 0) {
            money = money - 12000;
        }
        else if (n % 2 != 0) {
            money = money - (12000 + 50 * age);
        }
        age = age + 1;
    }
    return money;
}