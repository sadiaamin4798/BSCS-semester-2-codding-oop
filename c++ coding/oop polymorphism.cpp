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
    string name;
		car(string n){
			name=n;
		}
		void start()override{
		cout<<"car has 4 wheels."<<endl;
        cout<<"car name: "<<name<<endl;
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
/*	vehical* ptr;
	car c1("civic");
	ptr=&c1;
	ptr->start();
	bike b1("honda");
	ptr=&b1;
	ptr->start();*/
     vehical obj;
     obj.start();
     car obj1("civic");
     obj1.start();
     bike obj2("honda");
     obj2.start();
}
