#include<iostream>                                      //friend function syntax
using namespace std;
class my;                  //forward declaration of class
class myclass{
	int a,u;
	void show(){
		cout<<"my name is sadia ."<<endl;
	}
	public:
		myclass(){
			u=4;
			a=10;
		}
		friend void show(myclass,my);
};
class my{
	int b,w;
		public:
		my(){
			w=14;
			b=10;
		}
		friend void show(myclass,my);
}; //friend function declared always outside the class 
void show(myclass x,my y){
	int r,p;
	r=x.a + y.b;
	p=x.u + y.w;
	cout<<"result store in r from a to b of classes is: "<<r<<endl;
	cout<<"result store in p from u to w of classes is: "<<p<<endl;
}
int main(){
	myclass obj;
	my obj1;
	show(obj,obj1);
}
