#include<iostream>
using namespace std;
class manager{
protected:
int salary=50000;
public:
void display (){
cout << "salary of single employee is: " <<salary <<endl;
}
};
class employee: public manager{
//public:
 //int count=1;
public:

void display1 (){
cout << "salary of 1st employee is: " <<salary <<endl;
}

};
class employee2:public employee {
public:
void display1 (){
cout << "salary of 2nd employee is: " <<salary <<endl;
}
};
int main(){
employee2 obj;
obj.display();
obj.display1();
//faculty f;
//f.display();
//cout << "timetable" << f.timtable<<endl;
//phy p;
//p.display();
return 0;
}