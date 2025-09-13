#include<iostream>
using namespace std;
class myfunction{
private:
int n=3;
public:
void display1() const {
cout << "value= " <<n<< endl;
}
void display2(){
cout << "value= " <<n<< endl;
}
};
int main(){
myfunction a;
const myfunction b;
a.display1();
a.display2();
b.display1();
//b.display2();
}