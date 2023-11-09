#include<iostream>
#include<vector>        //library for vectors
using namespace std;

int main(){
    //Static Vector 
    vector <int> v;
    for (int i =0; i<100;i++){
        v.push_back(i);
        cout<<v.at(i)<<endl;
    }
    return 0;
}