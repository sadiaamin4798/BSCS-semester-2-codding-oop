#include <iostream>
using namespace std;

class Patient {
    string name;
public:
    Patient(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
};

class Doctor {
    string name;
    Patient* patients[10];  // Array of pointers to Patient
    int patientCount;
public:
    Doctor(string n) {
        name = n;
        patientCount = 0;
    }

    void addPatient(Patient* p) {
        if (patientCount < 10) {
            patients[patientCount++] = p;
        } else {
            cout << "Cannot add more patients." << endl;
        }
    }

    void showPatients() {
        cout << "Doctor " << name << " treats the following patients:" << endl;
        for (int i = 0; i < patientCount; i++) {
            cout << "- " << patients[i]->getName() << endl;
        }
    }
};

int main() {
    Patient p1("Ali");
    Patient p2("Sadia");
    Patient p3("Noor");

    Doctor d1("Dr. Ayesha");

    d1.addPatient(&p1);
    d1.addPatient(&p2);
    d1.addPatient(&p3);

    d1.showPatients();

    return 0;
}