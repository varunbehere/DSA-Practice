#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        double* cgpaPtr;

    Student (string name, double cgpa){
        this -> name = name;
        cgpaPtr = new double;
        *(this -> cgpaPtr) = cgpa;
    }

    Student (Student &obj){
        this -> name = obj.name;
        cgpaPtr = new double;
        *(this -> cgpaPtr) = *(obj.cgpaPtr);
    }

    void getInfo (){
        cout << "Name : " << this -> name <<endl;
        cout << "CGPA : " << *(this->cgpaPtr) << endl;
    }
};

int main (){
    Student S1("Varun Behere", 7.73);
    S1.getInfo();
    Student S2(S1);
    *(S2.cgpaPtr) = 7.79;
    S1.getInfo();
    S2.getInfo();
    return 0;
}