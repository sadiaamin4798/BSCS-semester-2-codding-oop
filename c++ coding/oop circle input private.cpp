#include<iostream>
using namespace std;
class circle {
private:
double radius;
 double area(double radius){
 return 3.14 *radius*radius ;
 }
 double circumference(double radius){
 return 2*3.14*radius ;
 }
 public:
 void set(){
 cout << "Enter radius=" << endl;
 cin >> radius;
 }
 double get1(){
 return area(radius);
 }
 double get2(){
 return circumference (radius);
 }
};
int main()
{
circle obj;
obj.set();
cout << "area= " <<obj.get1() <<endl;
cout << "circumference= " <<obj.get2() <<endl;
   // cout << "Hello World!" << endl;
    return 0;
}