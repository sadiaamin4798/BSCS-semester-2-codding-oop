#include <iostream>
using namespace std;

// Forward declaration
class FriendClass;

class MyClass {
private:
    int secretValue;

public:
    // Constructor to initialize secretValue
    MyClass(int value) {
    secretValue=value;
    }

    // Declare FriendClass as a friend
    friend class FriendClass;
};

class FriendClass {
public:
    // Function that can access the private member of MyClass
    void accessSecretValue(MyClass& obj) {
        cout << "Accessing secret value from FriendClass: " << obj.secretValue << endl;
    }
};

int main() {
    MyClass myObj(42);         // Creating an object of MyClass
    FriendClass friendObj;     // Creating an object of FriendClass

    // FriendClass accessing private member of MyClass
    friendObj.accessSecretValue(myObj);

    return 0;
}