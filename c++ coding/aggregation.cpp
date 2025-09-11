#include <iostream>
using namespace std;
class uni{
	public:
		string uni_name;
		public:
		uni(string n){
			uni_name=n;
		}
	void display(){
			cout<<" university name = "<<uni_name<<endl;
			cout<<"uni having different department"<<endl;
		}
		~uni(){
			cout<<"uni constructor is distroyed."<<endl;
		}
};
class department {
	public:
	string	department_name;
		uni* ptr;
		department(string n,uni* p){
			department_name=n;
			ptr=p;
		}
	void show(){
			cout<<" department name= "<<department_name<<endl;
			ptr->display();
		}
		~department(){
			cout<<"department constructor is distroyed"<<endl;
		}
};
int main(){
	uni* obj= new uni("ue");
	department obj1( "chem",obj);
	obj1.show();
	obj->display();
	delete obj;
}
