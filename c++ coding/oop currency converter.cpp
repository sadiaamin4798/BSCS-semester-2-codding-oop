#include<iostream>
using namespace std;
class crrencyconverter{
public:
void converter(double amount,string currency){
cout <<amount << " " <<currency <<" "<< amount*270<<" pkr"<<endl;
}
void converter(float amount,string currency){
cout <<amount <<" "<< currency<<" "<< amount*300<<" pkr"<<endl;
}
void converter(int amount,string currency){
cout <<amount <<" " <<currency<<" "<< amount*370<<" pkr"<<endl;
}
};
int main(){
crrencyconverter convert;
convert.converter(10.1,"USD");
convert.converter(20.1,"EURA");
convert.converter(30.1,"POUND");
return 0 ;
}