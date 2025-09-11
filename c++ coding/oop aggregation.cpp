#include<iostream>
using namespace std;
class student{
		string name;                   //agregation
		int age;
		public:
		student(string n,int a){
			name=n;
			age=a;
		}
		set(string n,int a){
			name=n;
			age=a;
		}
		void display(){
			cout<<"name :"<<name<<endl<<"age :"<<age<<endl;
		}
};
class school{
	string school_name;
	public:
		student* ptr;
		school(string n,student* p){
			school_name=n;
			ptr=p;
		}
		void show_s(){
			cout<<"name of school is :"<<school_name<<endl;
			ptr->display();
		}
		~school(){
			cout<<"school object is distroyed."<<endl;
		}
};
int main(){
	student* obj1=new student("sadia",15);
	school obj("uk",obj1);
	obj.show_s();
	//when object of school class is distroyed,object of student class still exist as given below.
	obj1->display();
}
