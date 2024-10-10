#include <iostream>
using namespace std;

class Example {
    public:
        int *data;

        Example (int data){
            this -> data = new int;
            *(this -> data) = data;
        }

        void Print(){
            cout<<"Data: " << *(this -> data) << endl;
        }
        
        ~Example (){
            cout << "Destructor Called" << endl;
            delete data;  // why not *data here - because *data will give value at that address and not the address
        }
};

int main (){

    Example E1(10);
    E1.Print();

    Example E2(20);
    E2.Print();
    
    return 0;
}