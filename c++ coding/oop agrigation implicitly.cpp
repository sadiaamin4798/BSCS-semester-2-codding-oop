#include<iostream>
using namespace std;
class student{
public:
 student (){
cout << "I am a student: "  <<endl;}
~student(){
cout << "the student is destroyed" << endl;
}
};
class CS_department{
public:
student*obj;
CS_department(student*obj){
this -> obj=obj;
cout << "this is cs department" << endl;
}
~CS_department(){
cout << "department is destroyed" << endl;
}
};
int main(){
student*s_object = new student; //dynamically created the obj for performing aggregation.
CS_department CS_object(s_object);
return 0;
}