#include <iostream>
using namespace std;

class Base {
    public :
        string Base_Class_String = "Base";

        Base (){
            cout << "Base Class Constructor" << endl;
        }
};

class Child1 : public Base {
    public :
        string Child_Class_1_String = "Child1";
        string newStr_Child1 = Base_Class_String + " - " + Child_Class_1_String;
        Child1 (){
            cout << "Child 1 Class Constructor" <<endl;
            cout << "Newly Updated String : " << newStr_Child1 <<endl;
        }
};

class Child2 : public Base {
    public :
        string Child_Class_2_String = "Child2";
        string newStr_Child2 = Base_Class_String + " - " + Child_Class_2_String;

        Child2 (){
            cout << "Child 2 Class Constructor" <<endl;
            cout << "Newly Updated String : " << newStr_Child2 <<endl;
        }
};

int main (){

    Child1 C1;
    Child2 C2;
    return 0;
}