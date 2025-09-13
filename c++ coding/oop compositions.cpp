#include<iostream>
using namespace std;

class student {
    string name;
    int age;
public:
    student(string n , int a ) {
        name = n;
        age = a;
    }
    void display() {
        cout << "name: " << name << endl << "age: " << age << endl;
    }
    ~student() {
        cout << "student object is destroyed." << endl;
    }
};

class school {
    string school_name;
    student obj;  // Composition: student object is part of school
public:
    school(string n, string student_name, int student_age) : obj(student_name, student_age) {
        school_name = n;
    }
    void show_s() {
        cout << "name of school is: " << school_name << endl;
        obj.display();
    }
    ~school() {
        cout << "school object is destroyed." << endl;
    }
};

int main() {
    school obj("ukid", "sadia", 15);
    obj.show_s();
    // obj.obj.display(); // Not allowed, obj is private.
}