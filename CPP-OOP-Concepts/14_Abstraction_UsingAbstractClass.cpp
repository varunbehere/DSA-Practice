#include <iostream>
using namespace std;

class AbstractShape{
    public:
    virtual void draw()= 0;
    void getInfo (){
        cout <<"AbstractShape class"<<endl;
    }
};

class Circle : public AbstractShape{
    public:
    void draw (){
        cout <<"drawing circle" << endl;
    }
};

int main (){
    AbstractShape* abstractShapePointer = new Circle;
    abstractShapePointer -> draw();
    abstractShapePointer -> getInfo();

    return 0;
}