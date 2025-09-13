#include<iostream>
using namespace std;
class increments{
private:
string name1;
string name2;
string name ;
public:
increments() {
name1="sadia";
name2="amin";
}
void display(){
cout << "name= " << name<< endl;
}
void operator +(){
name=name1+name2;
}
};
int main(){
increments obj;
+obj;
obj.display();
}
