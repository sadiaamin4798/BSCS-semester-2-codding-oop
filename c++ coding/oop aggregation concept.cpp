#include <iostream>
using namespace std;

class Employee {
public:
    string name;

    Employee(string empName) {
        name = empName;
    }

    void display() {
        cout << "Employee: " << name << endl;
    }
    ~Employee(){
    cout << "employee distroyed" << endl;
    }
};

class Department {
public:
    string deptName;
    Employee* employee;  // Aggregation: uses Employee pointer

    Department(string dName, Employee* emp) {
        deptName = dName;
        employee = emp;
    }

    void showDetails() {
        cout << "Department: " << deptName << endl;
        employee->display();
    }
    ~Department(){
    cout << "department destroyed" << endl;
    }
};

int main() {
  /*  Employee e1("Alice");

    Department d1("HR", &e1);  // Aggregation: department uses existing employee

    d1.showDetails();
    //e1.display();*/
    Employee* e1 = new Employee("Alice");
    Department d1("HR", e1);
    d1.showDetails();
    e1->display();
delete e1;  // destroy employee early
    return 0;
}