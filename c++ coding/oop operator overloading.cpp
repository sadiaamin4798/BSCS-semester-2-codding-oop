#include<iostream>
using namespace std;
class increments{
private:
int x;
public:
increments() {
x=0;
}
void display(){
cout << "the value of n= " << x<< endl;
}
void operator ++(){
x=x+1;
}
};
int main(){
increments obj;
obj.display();
++obj;
obj.display();
}
