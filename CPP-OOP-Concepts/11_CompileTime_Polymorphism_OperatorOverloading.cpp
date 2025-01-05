#include <iostream>
using namespace std;

class OperatorOverloading {

    public:
        int n;

        OperatorOverloading(int n){
            this -> n = n;
        }
        OperatorOverloading operator- (const OperatorOverloading &SecondNum){
            return OperatorOverloading((this -> n) - (SecondNum.n));
        }
        bool operator== (const OperatorOverloading &SecondNum){
            return (this -> n) == (SecondNum.n);
        }
};

int main (){
    OperatorOverloading Num1(10);
    OperatorOverloading Num2(5);

    OperatorOverloading Num3 = Num1 - Num2;
    cout << "Num3 :" << Num3.n <<endl;

    cout << (Num1 == Num2);
    return 0;
}