#include <iostream>
using namespace std;

unsigned int decimalToBinary(unsigned int decimal) {
    unsigned int binary = 0, place = 1;
    while (decimal > 0) {
        binary += (decimal % 2) * place;
        decimal /= 2;
        place *= 10;
    }
    return binary;
}

unsigned int binaryToDecimal(unsigned int binary) {
    unsigned int decimal = 0, power = 1;
    while (binary > 0) {
        decimal += (binary % 10) * power;
        binary /= 10;
        power *= 2;
    }
    return decimal;
}

unsigned int decimalToHex(unsigned int decimal) {
    unsigned int hex = 0, place = 1;
    while (decimal > 0) {
        hex += (decimal % 16) * place;
        decimal /= 16;
        place *= 10;
    }
    return hex;
}

unsigned int hexToDecimal(unsigned int hex) {
    unsigned int decimal = 0, power = 1;
    while (hex > 0) {
        decimal += (hex % 10) * power;
        hex /= 10;
        power *= 16;
    }
    return decimal;
}

int main() {
    int choice;
    unsigned int input, result;

    do {
        cout << "1. Convert Decimal to Binary" << endl;
        cout << "2. Convert Binary to Decimal" << endl;
        cout << "3. Convert Decimal to Hexadecimal" << endl;
        cout << "4. Convert Hexadecimal to Decimal" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter a decimal number: ";
            cin >> input;
            result = decimalToBinary(input);
            cout << "Binary representation: " << result << endl;
            break;

        case 2:
            cout << "Enter a binary number: ";
            cin >> input;
            result = binaryToDecimal(input);
            cout << "Decimal value: " << result << endl;
            break;

        case 3:
            cout << "Enter a decimal number: ";
            cin >> input;
            result = decimalToHex(input);
            cout << "Hexadecimal representation (as unsigned int): " << result << endl;
            break;

        case 4:
            cout << "Enter a hexadecimal number (as unsigned int): ";
            cin >> input;
            result = hexToDecimal(input);
            cout << "Decimal value: " << result << endl;
            break;

        case 5:
            cout << "Exiting program. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
