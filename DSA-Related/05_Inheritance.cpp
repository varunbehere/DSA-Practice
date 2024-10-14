#include <iostream>
using namespace std;

class Person {
    public:
        string Name;
        int Age;    
        string Job; 

        // Constructor for the Person class
        // Takes three arguments: name (string), age (int), and job (string)
        Person (string name, int age, string job) {
            this->Name = name; 
            this->Age = age;   
            this->Job = job;   
        }
};

class Student : public Person {
    public:
        string Company_Name;

        // Constructor for the Student class
        // Takes four arguments: name (string), age (int), job (string), and company_name (string)
        // The base class (Person) is initialized with name, age, and job using the initializer list
        Student (string name, int age, string job, string company_name)
            : Person(name, age, job) {  // Call the base class constructor to initialize Person attributes
            this->Company_Name = company_name;  
        }

        void getDetails() {
            cout << "Name: " << this->Name << endl;           
            cout << "Age: " << this->Age << endl;             
            cout << "Job: " << this->Job << endl;             
            cout << "Company Name: " << this->Company_Name << endl;
        }
};

// Main function, the entry point of the program
int main() {
    Student S1("Varun", 21, "Intern", "Solidatus");
    S1.getDetails();

    return 0;  // Exit the program
}
