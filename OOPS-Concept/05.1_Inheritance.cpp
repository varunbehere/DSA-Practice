#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;

        Person (){
            cout <<"Person Constructor Called"<<endl;
        }
        ~Person (){
            cout << "Person Destructor Called"<<endl;
        }

};
class Student : public Person {
    public:
        int rollNo;
        Student (){
            cout << "Student Constructor Called" <<endl;
        }
        ~Student (){
            cout << "Student Destructor Called" <<endl;
        }
};

int main (){
    Student S1;
    S1.rollNo = 0;
    return 0;
}