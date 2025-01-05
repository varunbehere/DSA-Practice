#include <iostream>
using namespace std;

class TempObject {
	public:
	TempObject(){
		cout << "Constructor" << endl;
	}
	~TempObject(){
		cout << "Destructor" << endl;
	}
};
/*
The main below this shows the use of static in terms of object
the o/p here will be:
Constructor
Destructor
End of main

int main (){

	if (true) {
		TempObject tObj;
	}

	cout<<"End of main" << endl;

	return 0;
}
*/


/*
The output here will be:
Constructor
End of main
Destructor

because the static object will remain until the end of program

int main (){
	if (true){
		static TempObject tObj;
	}
	cout << "End of main" << endl;
}
*/