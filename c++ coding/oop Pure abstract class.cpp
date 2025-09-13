#include<iostream>                             //abstract class
using namespace std;
class vehical{                              //if any class has atleast one pure virtual function then it will abstract 
	public:                                           
		virtual void vehicals()=0;                          //syntax of pure virtual funtcion
	virtual void show(){
			cout<<"all vehical has wheels."<<endl;
		}
};
class car :public vehical{
	public:
		void vehicals(){
		cout<<"car has 4 wheels."<<endl;
		}
		void show() override {
			cout<<"car is moving."<<endl;
		}
};
class bike :public vehical{
	public:
		void vehicals(){
		cout<<"bike has 2 wheels."<<endl;
		}
		void show() override {
			cout<<"bike is moving."<<endl;
		}
};
int main(){
	vehical* ptr;                 
	car carl;
	bike bikel;
	ptr=&carl;
	ptr->vehicals();
	ptr->show();
    ptr=&bikel;
	ptr->vehicals();
	ptr->show();
}
