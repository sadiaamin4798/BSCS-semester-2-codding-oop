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
 static void getcounter(){
cout << "the value of countrr: " <<counter<< endl;
}
};
int student::counter=800;
int main(){
student ali,Fatima,sana;
ali.setdata();
ali.getdata();
student::getcounter();
Fatima.setdata();
Fatima.getdata();
student::getcounter();
sana.setdata();
sana.getdata();
student::getcounter();
return 0;
}