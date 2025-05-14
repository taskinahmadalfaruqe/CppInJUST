#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;
    
    while (true) {
        cout << "Enter operation (A/S/M/D): ";
        cin >> operation;
        
        // Convert to uppercase to handle lowercase inputs
        operation = toupper(operation);
        
        // Check if operation is valid
        if (operation != 'A' && operation != 'S' && operation != 'M' && operation != 'D') {
            cout << "Invalid operation. Program ending." << endl;
            break;
        }
        
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        
        switch (operation) {
            case 'A':
                cout << "Data has been added: " << num1 + num2 << endl;
                break;
            case 'S':
                cout << "Data has been subtracted: " << num1 - num2 << endl;
                break;
            case 'M':
                cout << "Data has been multiplied: " << num1 * num2 << endl;
                break;
            case 'D':
                if (num2 != 0) {
                    cout << "Data has been divided: " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
        }
    }
    
    return 0;
}