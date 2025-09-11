#include <iostream>
using namespace std;
class animal{
	public:
	virtual void annimalsound(){
	cout<<" animal sounds"<<endl;
	}

	
};
class dog : public animal{
	public:

	void annimalsound() override{
		cout<<" dog sound= woaf woaf"<<endl;
	}
};
class cat : public animal{
	public:

	void annimalsound() override{
		cout<<" cat sound= meow meow"<<endl;
	}
};
int main (){
	animal* ptr;
	dog d;
	cat c;
	ptr = &d;

	ptr->annimalsound();
	ptr = &c;

	ptr->annimalsound();
	
}
