#include <iostream>
using namespace std;

class Resize{
    public:
        virtual void resize ()= 0;
};
class Draw{
    public:
        virtual void draw ()= 0;
};
class Shape : public Resize, public Draw{
    public:
        void draw (){
            cout<<"Drawing Shape" << endl;
        }
        void resize(){
            cout<<"Resizing Shape" << endl;
        }
};

int main (){
    Shape S1;
    S1.draw();
    S1.resize();

    return 0;
}