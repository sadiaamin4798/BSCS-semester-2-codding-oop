#include<iostream>
using namespace std;
class cruconv{
	private:
		int USD;
		int PKR;
		int EUR;
		int pounds;
	public:
	cruconv(){
		cout<<"default constructor called"<<endl;
	}
	/*	cruconv(int U){
		USD=U;
		PKR=U;
		EUR=U;
		pounds=U;
		
	}*/
	cruconv(int U,int P, int E,int p){
		USD=U;
		PKR=P;
		EUR=E;
		pounds=p;
		
	}
	void display(){
	
	cout<<"USD to PKR   "<<PKR*300<<"  PKR"<<endl;
	cout<<"EUR to PKR   "<<PKR*320<<"  PKR"<<endl;
	cout<<"pounds to PKR   "<<PKR*380<<"  PKR"<<endl;}
};
int main(){
	int value;
	cout<<"enter value"<<endl;
	cin>>value;
	cout<<"one parameter constructor "<<endl;
cruconv	obj,obj1(value,value,value,value);//,obj2(000);

//obj2.display();
obj1.display();
}