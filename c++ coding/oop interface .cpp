#include<iostream>
using namespace std;

// Interface-like abstract class
class IShape {
public:
    virtual void draw() = 0;      // Pure virtual = abstract method
    virtual void resize() = 0;
    virtual ~IShape() {}          // Virtual destructor for cleanup
};

// Circle class implementing the IShape interface
class Circle : public IShape {
public:
    void draw()  {
        cout << "Drawing Circle" << endl;
    }
    void resize()  {
        cout << "Resizing Circle" << endl;
    }
};

// Rectangle class implementing the IShape interface
class Rectangle : public IShape {
public:
    void draw()  {
        cout << "Drawing Rectangle" << endl;
    }
    void resize()  {
        cout << "Resizing Rectangle" << endl;
    }
};

int main() {
  /*  // Pointers to abstract base class (interface)
    IShape* shape1 = new Circle();
    IShape* shape2 = new Rectangle();

    // Runtime polymorphism: functions resolved via vtable
    cout << "--- Circle Object ---" << endl;
    shape1->draw();
    shape1->resize();

    cout << "\n--- Rectangle Object ---" << endl;
    shape2->draw();
    shape2->resize();

    // Clean up
    delete shape1;
    delete shape2;*/
    Circle c;
    c.draw();
    c.resize();
    Rectangle r;
    r.draw();
    r.resize();
    
    return 0;
}