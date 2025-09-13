#include <iostream>
using namespace std;

class Division {
private:
    int numerator, denominator;
public:
    Division(int num, int den){
      numerator=num; 
     denominator=den;
    }

    void divide() {
        try {
            if (denominator == 0)
                throw "Division by zero error!";
            cout << "Result: " << numerator / denominator << endl;
        } catch (const char* msg) {
            cout << "Exception caught: " << msg << endl;
        }
    }
};

int main() {
    Division d1(10, 2);
    d1.divide();  // Works fine

    Division d2(10, 0);
    d2.divide();  // Throws exception

    return 0;
}