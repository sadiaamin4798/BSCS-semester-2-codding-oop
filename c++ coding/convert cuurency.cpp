#include <iostream>
using namespace std;
class convert_currency{
	public:
		int ammount;
	void convert( int ammount){
		cout<<ammount<<" usd amount = "<<ammount*281<<"pkr"<<endl;		
	}
	void convert( float ammount){
		cout<<ammount<<" eur amount"<<ammount*318<<"pkr"<<endl;		
	}
	void convert( double ammount){
		cout<<ammount<<" pound amount"<<ammount*373<<"pkr"<<endl;		
	}
};
int main(){
convert_currency obj;
obj.convert(100);
obj.convert(100.50);
obj.convert(100.00015);
}
