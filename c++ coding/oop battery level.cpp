#include<iostream>
using namespace std;
class device{
	private:
		int batterylevel;
		public:
			void set(int b){
				batterylevel=b;
                
			}
		void get(){
				cout<<"battery is "<<batterylevel<<endl;
			}
        void operator++(){
        batterylevel=batterylevel+1;
        }
	//	int device::batterylevel = 90;
};
int main(){
	device obj;
	obj.set(78);
	obj.get();
    ++obj;
    obj.get();
}