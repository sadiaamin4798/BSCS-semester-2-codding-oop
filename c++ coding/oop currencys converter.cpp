#include <iostream>
using namespace std;

class CurrencyConverter {
public:
    // Convert USD to PKR
    void convert(double amount, int currencyCode) {
        
            cout << amount << " USD = " << amount * 280 << " PKR" << endl;
    }

    // Convert EUR to PKR
    void convert(double amount, double currencyRate) {
        cout << amount << " EUR = " << amount * 300 << " PKR" << endl;
    }

    // Convert GBP to PKR
    void convert(double amount, char currencySymbol) {
        cout << amount << " Pounds = " << amount * 350 << " PKR" << endl;
    }
};

int main() {
    CurrencyConverter c;

    // Calling different overloaded functions
    c.convert(100, 1);   // USD to PKR
    c.convert(50, 300.0); // EUR to PKR
    c.convert(20, 'P'); // GBP to PKR

    return 0;
}