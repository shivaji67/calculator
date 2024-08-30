#include <iostream>
#include <cmath> 

using namespace std;

void showMenu() {
    cout << "\nAdvanced Calculator Menu:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Exponentiation (^)\n";
    cout << "6. Square Root (s)\n";  // Changed from '√' to 's'
    cout << "7. Exit\n";
    cout << "Choose an operation: ";
}

int main() {
    char operation;
    double num1, num2, result;
    bool keepCalculating = true;

    while (keepCalculating) {
        showMenu();
        cin >> operation;

        switch (operation) {
            case '1':
            case '+':
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;

            case '2':
            case '-':
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;

            case '3':
            case '*':
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;

            case '4':
            case '/':
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error! Division by zero." << endl;
                }
                break;

            case '5':
            case '^':
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                result = pow(num1, num2);
                cout << num1 << " ^ " << num2 << " = " << result << endl;
                break;

            case '6':
            case 's':  // Changed from '√' to 's'
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 >= 0) {
                    result = sqrt(num1);
                    cout << "√" << num1 << " = " << result << endl;
                } else {
                    cout << "Error! Square root of a negative number is not real." << endl;
                }
                break;

            case '7':
                keepCalculating = false;
                cout << "Exiting calculator. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid operation. Please try again." << endl;
                break;
        }
    }

    return 0;
}