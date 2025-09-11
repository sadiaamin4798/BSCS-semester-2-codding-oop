#include<iostream>                            
using namespace std;
class address{
	string street;
	public:
		address(){                                       //composition
			
		}
		address (string s){
			street =s;
		}
		void show(){
			cout<<"nd street: "<<street<<endl;
		}
};
class person{
	string name;
	public:
		//obj od address class ==composition
		address a1;
		person(string n,string s):name(n),a1(s){
			
		}
		void show_person(){
			cout<<"name of person is: "<<name<<endl;
			a1.show();
		}
};
int main(){
	person p1("sadia","1");
	//here when obj of person class destroy,its address will also destroy==composition
	p1.show_person();
}
