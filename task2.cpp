#include<iostream>
using namespace std;
void printfibanocci(int number);
main() {
    int length;
    cout << "Enter the number: ";
    cin >> length;
    printfibanocci(length);

}
void printfibanocci(int length) {
    int previous = 0;
    int current = 1;
    int next;
    cout << previous << "," << current;
    for (int count = 1;count <= length - 2;count = count + 1) {
        next = previous + current;
        cout << "," << next;
        previous = current;
        current = next;

    }
}