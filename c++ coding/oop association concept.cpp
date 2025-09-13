#include <iostream>
using namespace std;

class Course {
public:
    string courseName;

    Course(string name) {
        courseName = name;
    }

    void display() {
        cout << "Course: " << courseName << endl;
    }
};

class Student {
public:
    string studentName;

    // Association: Student has a pointer to Course
    Course* course;

    Student(string name , Course* c) {
        studentName = name;
        course = c; 
    }

    void showDetails() {
        cout << "Student: " << studentName << endl;
        course->display();
        }
    ~Student(){
    cout << "not enrolled in any course" << endl;
    }
};

int main() {
    Course c1("English");

    Student s1("Bob",&c1);
     // associating course with student
    s1.showDetails();
    c1.display();
    return 0;
}