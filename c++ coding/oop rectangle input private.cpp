#include<iostream>
using namespace std;
class rectangle {
private:
double length;
double width;
 double area(double length,double width){
 return length*width ;
 }
 double perimeter (double length,double width ){
 return 2*(length+width);
 }
 public:
 void set(){
 cout << "Enter length=" << endl;
 cin >> length;
  cout << "Enter width=" << endl;
 cin >> width;
 }
 double get1(){
 return area(length,width);
 }
 double get2(){
 return perimeter (length,width);
 }
};
int main()
{
rectangle obj;
obj.set();
cout << "area= " <<obj.get1() <<endl;
cout << "perimeter= " <<obj.get2() <<endl;
   // cout << "Hello World!" << endl;
    return 0;
}