// Copy Constructor in C++ for Primitive Data Types


#include <iostream>
using namespace std;

class Example {
  
  public :
    int rollNo;
    string name;
  
  Example (int rollNo, string name) {
    this -> rollNo = rollNo;
    this -> name = name;
  }
  
  void Print (){
    cout<<"Roll No: " << this -> rollNo << endl;
    cout<<"Name: " << this -> name << endl;
  }
  
};

int main() 
{

    Example E1(1, "ABC");
    E1.Print();
    
    Example E2 (E1);
    E2.Print();
    
    cout << endl;
    cout << "After Changes"<<endl;
    cout << endl;
    
    E2.rollNo = 12;
    
    E1.Print();
    E2.Print();

    return 0;
}