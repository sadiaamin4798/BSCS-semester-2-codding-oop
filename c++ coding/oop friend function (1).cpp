#include <iostream>
using namespace std;

class ClassB;  // Forward declaration

class ClassA {
private:
    int numA;

public:
    ClassA() {
        numA = 10;
    }

    // Declare friend function
    friend int add(ClassA, ClassB);
};

class ClassB {
private:
    int numB;

public:
    ClassB() {
        numB = 5;
    }

    // Declare friend function
    friend int add(ClassA, ClassB);
};

// Friend function definition
int add(ClassA objA, ClassB objB) {
    return objA.numA + objB.numB;
}

int main() {
    ClassA a;
    ClassB b;
    cout << "Sum: " << add(a, b) << endl;
    return 0;
}