#include<iostream>
using namespace std;
class calculator {
public:
int a;
int b;
void uservalue(){
cout << "enter 1sr value= " << endl;
cin >> a;
cout << "enter 2nd value= " << endl;
cin >> b;
cout << "value of a= " <<a<< endl;
cout << "value of b= " <<b<< endl;
}
int add() {
return a+b;
}
int sub() {
return a-b;
}
int mul() {
return a*b;
}
double div() {
if(b==0){
cout << "error" << endl;
}else{
return a/b;
}
}
int mod() {
return a%b;
}
};
int main(){
calculator obj;
obj.uservalue();
cout << "1. addition" << endl;
cout << "2. subtraction" << endl;
cout << "3. multiplication" << endl;
cout << "4. division" << endl;
cout << "5. modulus" << endl;
int choice ;
cout << "enter your choice: " << endl;
cin>>choice ;
if(choice==1){
cout << "addition= " <<obj.add() <<endl;
}
else if(choice==2){
cout << "subtraction= " <<obj.sub() <<endl;
}
else if(choice==3){
cout << "multiplication= " <<obj.mul() <<endl;
}
else if(choice==4){
cout << "division= " <<obj.div() <<endl;
}
else if(choice==5){
cout << "modulus= " <<obj.mod() <<endl;}
else{
cout << "invalid function" << endl;
}
return 0;
}
