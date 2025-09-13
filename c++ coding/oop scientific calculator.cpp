#include <iostream>
#include <cmath>  // For trigonometric and logarithmic functions
#include <stdexcept>  // For exception handling
using namespace std;
#define PI 3.14
class scientificcalculator {
public:
// Addition function
void addition() {
    double a, b;
    cout << "Enter two numbers to add: ";
    cin >> a >> b;
    cout << "Result: " << a + b << endl;
}

// Subtraction function
void subtraction() {
    double a, b;
    cout << "Enter two numbers to subtract: ";
    cin >> a >> b;
    cout << "Result: " << a - b << endl;
}

// Multiplication function
void multiplication() {
    double a, b;
    cout << "Enter two numbers to multiply: ";
    cin >> a >> b;
    cout << "Result: " << a * b << endl;
}

// Division function
void division() {
    double a, b;
    cout << "Enter two numbers to divide: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "Error: Division by zero is undefined.\n";
    } else {
        cout << "Result: " << a / b << endl;
    }
}

// Modulus function
void mod() {
    int a, b;
    cout << "Enter two integers to find the modulus: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "Error: Modulus by zero is undefined.\n";
    } else {
        cout << "Result: " << a % b << endl;
    }
}

// Sine function
void sine() {
    double angle;
    cout << "Enter an angle (in radians) for sine calculation: ";
    cin >> angle;
    cout << "Result: " << sin(angle) << endl;
}

// Cosine function
void cosine() {
    double angle;
    cout << "Enter an angle (in radians) for cosine calculation: ";
    cin >> angle;
    cout << "Result: " << cos(angle) << endl;
}

// Tangent function
void tangent() {
    double angle;
    cout << "Enter an angle (in radians) for tangent calculation: ";
    cin >> angle;
    if (cos(angle) == 0) {
        cout << "Error: Tangent is undefined for this angle.\n";
    } else {
        cout << "Result: " << tan(angle) << endl;
    }
}
void arcsine() {
    double value;
    cout << "Enter value b/w 1 and -1: " << endl;
    cin >> value;
        if (value >= -1 && value <= 1)
            cout << "Arcsin value=" << asin(value )* 180/PI << "°" << endl;
        else
            cout << "Error! Input out of range (-1 to 1)." << endl;
    }

    void arccosine() {
    double value;
    cout << "Enter value b/w 1 and -1: " << endl;
    cin >> value;
        if (value >= -1 && value <= 1)
            cout << "Arccos value = " << acos(value) * 180/PI << "°" << endl;
        else
            cout << "Error! Input out of range (-1 to 1)." << endl;
    }

    void arctangent() {
    double value;
    cout << "Enter value b/w 1 and -1: " << endl;
    cin >> value;
        cout << "Arctan value= " << atan(value )* 180/PI << "°" << endl;
    }
// Logarithm function (log base 10)
void logarithm() {
    double value;
    cout << "Enter a number for logarithm calculation: ";
    cin >> value;
    if (value <= 0) {
        cout << "Error: Logarithm of non-positive numbers is undefined.\n";
    } else {
        cout << "Result: " << log10(value) << endl;
    }
}

// Square root function
void squareRoot() {
    double value;
    cout << "Enter a number for square root calculation: ";
    cin >> value;
    if (value < 0) {
        cout << "Error: Square root of negative numbers is undefined (imaginary).\n";
    } else {
        cout << "Result: " << sqrt(value) << endl;
    }
}

// Power function
void power() {
    double base, exponent;
    cout << "Enter the base and exponent: ";
    cin >> base >> exponent;
    cout << "Result: " << pow(base, exponent) << endl;
}
};
int main(){
scientificcalculator obj;
int choice;
    string cont;
    
    do {
        // Display menu options
        cout << "---- SCIENTIFIC CALCULATOR ----\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Sine\n";
        cout << "7. Cosine\n";
        cout << "8. Tangent\n";
        cout << "9. Logarithm\n";
        cout << "10. Square Root\n";
        cout << "11. Power\n";
        cout << "12. arcSine\n";
        cout << "13. arcCosine\n";
        cout << "14. arcTangent\n";
        cout << "Enter your choice (1-11): ";
        cin >> choice;

        // Switch statement to handle user choice
        switch (choice) {
            case 1: obj.addition(); break;
            case 2: obj.subtraction(); break;
            case 3: obj.multiplication(); break;
            case 4: obj.division(); break;
            case 5: obj.mod(); break;
            case 6: obj.sine(); break;
            case 7: obj.cosine(); break;
            case 8: obj.tangent(); break;
            case 9: obj.logarithm(); break;
            case 10: obj.squareRoot(); break;
            case 11: obj.power(); break;
            case 12: obj.arcsine(); break;
            case 13: obj.arccosine(); break;
            case 14: obj.arctangent(); break;
            default: cout << "Invalid choice. Please try again.\n"; break;
        }

        // Ask if user wants to perform another calculation
        cout << "Do you want to perform another operation? (y/n): ";
        cin >> cont;
        
    } while (cont == "yes" || cont == "Yes");
    
    cout << "Thank you for using the calculator!\n";
}