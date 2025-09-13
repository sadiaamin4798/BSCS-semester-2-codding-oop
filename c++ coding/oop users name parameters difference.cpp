#include<iostream>
using namespace std;
class A{
public:
int no1=50,no2=10;
public:
void function (){
int sum=no1+no2;
cout << "sum is: " <<sum <<endl;
}
void function (int a,int b){
int sub=a-b;
cout << "sub is: " <<sub <<endl;
}
};
int main(){
A obj;
obj.function();
obj.function(50,40);
return 0;
}