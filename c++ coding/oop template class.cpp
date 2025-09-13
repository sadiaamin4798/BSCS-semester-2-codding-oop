#include<iostream>
using namespace std;

template <typename T>
class Box {
private:
    T value;
public:
    void setValue(T val) {
        value = val;
    }

    T getValue() {
        return value;
    }
};

int main() {
    Box<int> intBox;
    intBox.setValue(42);
    cout << "Int Box: " << intBox.getValue() << endl;

    Box<string> strBox;
    strBox.setValue("Hello, templates!");
    cout << "String Box: " << strBox.getValue() << endl;

    return 0;
}