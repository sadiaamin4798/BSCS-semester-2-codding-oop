#include<iostream>
using namespace std;
class classes{
public:
int plusfunction(int x,int y) {
return x+y;
}
double plusfunction(double x, double y){
return x+y;
}
};
int main(){
classes obj;
int num1=obj.plusfunction(8,5);
double num2=obj.plusfunction(4.3,2.26);
cout << "int=" << num1<<endl;
cout << "double=" << num2<<endl;
return 0 ;
}
