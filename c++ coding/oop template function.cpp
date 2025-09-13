#include<iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapValues(x, y);
    cout << "x = " << x << ", y = " << y << endl;

    double a = 3.14, b = 2.71;
    swapValues(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}