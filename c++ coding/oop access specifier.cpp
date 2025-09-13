#include <iostream>
#include <string>
using namespace std;
class student {
private:
string name;
int id;
public:
void set(string n,int i){
name=n;
id=i;
}
string get1(){
return name;
}
int get2(){
return id;
}
};
int main(){
student obj;
obj.set("sadia",123);
cout << "name=" << obj.get1()<<endl;
cout << "id=" << obj.get2()<<endl;
obj.set("saira",456);
cout << "name=" << obj.get1()<<endl;
cout << "id=" << obj.get2()<<endl;
}