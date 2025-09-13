#include<iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void animalSound() = 0; // Pure virtual function
    void sleep() {
        cout << "Zzz" << endl;
    }
    virtual ~Animal() {} // Always good to add a virtual destructor
};

// Derived class - Pig
class Pig : public Animal {
public:
    void animalSound() override {
        cout << "The pig says: wee wee" << endl;
    }
};

// Derived class - Dog
class Dog : public Animal {
public:
    void animalSound() override {
        cout << "The dog says: woof woof" << endl;
    }
};

int main() {
     /*Pig myPig;
     myPig.animalSound();
     myPig.sleep();*/
    Animal* a1 = new Pig();  // Base pointer pointing to derived object
    

    cout << "--- Pig Object ---" << endl;
    a1->animalSound();  // Runtime polymorphism
    a1->sleep();
    Animal* a2 = new Dog();
    cout << "\n--- Dog Object ---" << endl;
    a2->animalSound();  // Runtime polymorphism
    a2->sleep();

   // delete a1;
 //   delete a2;

    return 0;
}