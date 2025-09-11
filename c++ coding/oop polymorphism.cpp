#include<iostream>
using namespace std;
class vehical{
	public:
		virtual void start(){
			cout<<"all vehical has wheels."<<endl;
		}
};
class car :public vehical{
	public:
		void start()override{
		cout<<"car has 4 wheels."<<endl;
		}
};
class bike :public vehical{
	public:
		string name;
		bike(string n){
			name=n;
		}
		void start()override{
		cout<<"bike has 2 wheels."<<endl;
		cout<<"bike name: "<<name<<endl;
		}
};
int main(){
	vehical* ptr_base;
	car c1;
	ptr_base=&c1;
	ptr_base->start();
	bike b1("70");
	ptr_base=&b1;
	ptr_base->start();
}
