// Add members of two different classes using friend functions
//friend functions are functions used when you need a non-member function to access private members in a class

#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    
    public:
       
        ClassA() : numA(13) {}
        
    private:
        int numA;
        friend int add(ClassA, ClassB);
};

class ClassB {

    public:
       
        ClassB() : numB(1) {}
    
    private:
        int numB;
        friend int add(ClassA, ClassB);
};

int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}