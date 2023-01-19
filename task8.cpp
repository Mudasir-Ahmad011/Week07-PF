#include<iostream>
#include<cmath>
using namespace std;
float calculateMoney(int age, int pricePertoy, float price);
main() {
    int age;
    float washing_machine_price;
    int price_eachToy;
    float result;
    cout << "Enter the age(1-77): ";
    cin >> age;
    cout << "Enter price of washing machine: ";
    cin >> washing_machine_price;
    cout << "Enter price of each toy: ";
    cin >> price_eachToy;
    result = calculateMoney(age, price_eachToy, washing_machine_price);
    if (result > 0) {
        cout << "Yes! " << endl << result;
    }
    else if (result < 0) {
        cout << "No! " << endl << abs(result);
    }
}
float calculateMoney(int age, int pricePertoy, float price) {
    int evenAge = 0, oddAge = 0, sumeven = 0, totaltoyprice = 1;
    float result;
    for (int n = 1;n <= age;n++) {
        if (n % 2 != 0) {
            oddAge = oddAge + 1;
        }
        else if (n % 2 == 0) {
            evenAge = evenAge + 10;
            sumeven = sumeven + evenAge - 1;

        }
    }
    totaltoyprice = oddAge * pricePertoy;
    int total = sumeven + totaltoyprice;
    result = total - price;
    return result;
}