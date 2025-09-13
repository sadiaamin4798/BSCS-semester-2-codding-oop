#include<iostream>
using namespace std;
class student {
private:
int reg_no;
static int counter;
public:
void setdata(void){
cout<<"enter id: "<<endl;
cin >> reg_no;
counter++;
}
void getdata(){
cout << "the reg no of student: " <<reg_no<<" student no: "<<counter<< endl;
}
};
int student::counter=800;
int main(){
student ali,Fatima,sana;
ali.setdata();
ali.getdata();
Fatima.setdata();
Fatima.getdata();
sana.setdata();
sana.getdata();
return 0;
}