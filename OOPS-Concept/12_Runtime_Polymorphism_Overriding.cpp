// We cant completely call this run time polymorphism but this is method overriding.

#include <iostream>
using namespace std;

class Parent {
    public:
        void getInfo (){
            cout <<"Inside Parent Class"<<endl;
        }
};

class Child : public Parent {
    public:
        void getInfo (){
            cout <<"Inside Child Class"<<endl;
        }
};

int main (){
    Child c1;
    c1.getInfo();
    return 0;
}