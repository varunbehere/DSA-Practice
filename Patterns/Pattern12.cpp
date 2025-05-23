    #include <iostream>
    using namespace std;

    void PrintPattern (int n){
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++){
                cout << j << " ";
            }

            for (int j = 1; j <= 2*(n-i); j++){
                cout <<"  ";
            }

            for (int j = i; j >= 1; j--){
                cout << j << " ";
            }

            cout << endl;
        }
    }

    int main (){
        int n = 3;

        PrintPattern (n);
    }
    /*
    1 _ _ _ _ 1 
    1 2 _ _ 2 1 
    1 2 3 3 2 1
    */