#include <iostream>
using namespace std;

// Forward declaration
class MyClass;

class FriendClass {
public:
    // Friend function that can access private members of MyClass
    void accessFriendFunction(MyClass& obj);
};

class MyClass {
private:
    int secretValue;

public:
    MyClass(int value) : secretValue(value) {}

    // Declare FriendClass as a friend class
    friend class FriendClass;

    // Declare a standalone friend function
    friend void accessFriendFunction(MyClass& obj);
};

// Member function of FriendClass (acts as a friend class)
void FriendClass::accessFriendFunction(MyClass& obj) {
    cout << "FriendClass accessing secret value: " << obj.secretValue << endl;
}

// Standalone friend function
void accessFriendFunction(MyClass& obj) {
    cout << "Standalone friend function accessing secret value: " << obj.secretValue << endl;
}

int main() {
    MyClass myObj(99);
    FriendClass friendObj;

    // Access via friend class
    friendObj.accessFriendFunction(myObj);

    // Access via standalone friend function
    accessFriendFunction(myObj);

    return 0;
}