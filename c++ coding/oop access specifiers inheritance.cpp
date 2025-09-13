#include<iostream>
using namespace std;
class faculty{
private:
string timetable="abcdef";
public:
void display (){
cout << "The timetable for CS is: " <<timetable <<endl;}
};
class CS: public faculty{
/*public:
string timetable ="abcdef";
public:
void getdisplay (){
cout << "The timetable for CS is: " <<timetable <<endl;}*/
};
class phy: public CS {};
int main(){
phy obj;
obj.display();
//faculty f;
//f.display();
//cout << "timetable" << f.timtable<<endl;
//phy p;
//p.display();
return 0;
}