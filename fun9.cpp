#include <iostream>
using namespace std;

int sum(int a, int b) {
    int result = a + b;
    return result;
}

int main() {
    int num1, num2;
    cout << "Enter the value of num1: " << endl;
    cin >> num1;
    cout << "Enter the value of num2: " << endl;
    cin >> num2;
    cout << "The sum of the numbers is: " << sum(num1, num2) << endl;
    return 0;
}
