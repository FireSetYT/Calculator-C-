#include <iostream>


using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract (double a, double b) {
    return a - b;

}

double multiply (double a, double b) {
    return a * b;
}

double divide (double a, double b) {
    return a / b;
}

int main() {

while (true){

    char operation;
    double num1, num2;

    cout << "Select an operation (+, -, *, / or 0 to exit):";
    cin >> operation;

    if(operation == '0'){
        cout << "Logging out... " << endl;
        break;
    }

    cout << "Enter the first number:";
    cin >> num1;

     cout << endl;

    cout << "Enter the second number:";
    cin >> num2;

    switch (operation) {
    case '+':
        cout << "Result: " << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
        break;
    case '-':
        cout << "Result: " << num1 << " + " << num2 << " = " << subtract(num1, num2) << endl;
        break;

    case '*':
        cout << "Result: " << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
        break;

    case '/':
    if (num2 == 0)
    {
        cout << "Division by 0!" << endl;
    }
    else {
        cout << "Result :" << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
    }
    break;

    default:
    cout << "Error: Invalid operation" << endl;
    break;
    }

    cout << endl;
}
 return 0;
}

