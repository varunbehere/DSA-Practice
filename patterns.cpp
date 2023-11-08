#include <iostream>
using namespace std;

void pattern2(int n){
    // * 
    // * * 
    // * * * 
    // * * * * 
    // * * * * * a
    for (int i =0; i<=n; i++){
        for(int j =0; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    // 1
    // 12
    // 123
    // 1234
    for (int i= 0; i<=n;i++){
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern4 (int n){
    // 1
    // 2 2
    // 3 3 3
    for (int i = 1 ; i<=n ;i++){
        for (int j = 1; j<=i ; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern5 (int n){
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    for (int i = 1 ; i <= n ; i++){
        for (int j = 0; j<n-i+1 ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    for (int i = 1; i <=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}
void pattern7(int n){
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    for (int i=1; i<=n; i++){
        for (int j=0; j<=n-i-1;j++){
            //space
            cout<<" ";
        }
        for (int j =0; j<2*i-1; j++){
            cout<<"*";
        }
        for(int j =0; j<=n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int n){
    //  *******
    //   *****
    //    ***
    //     *
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        
        // Print stars
        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            cout << "*";
        }
        
        // Print trailing spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        
        cout << endl;
    }
}
void pattern9(int n){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

}
void pattern10(int n){
    // *
    // **
    // ***
    // ****
    // ***
    // **
    // *
    int stars;
    for (int i =1; i<=2*n-1; i++){
        stars =i;
        if(i>n)stars = 2*n-i;
        for (int j =0; j<stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern11(int n){
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1
    int start=1;
    for (int i =1; i<=n; i++){
        if (i%2==0)start=0;
        else start=1;
        for (int j =0; j<i; j++){
            cout<<start<<" ";
            start =1-start;
        }
        cout<<endl;
    }
}
void pattern12(int n){
    // 1                     1
    // 1 2                 2 1
    // 1 2 3             3 2 1
    // 1 2 3 4         4 3 2 1
    // 1 2 3 4 5     5 4 3 2 1
    // 1 2 3 4 5 6 6 5 4 3 2 1
    for (int i =1; i<=n; i++){
                for (int j =1; j<=i;j++){
                    cout<<j<<" ";
                }
                for (int j =1; j<=2*(n-i); j++){
                    cout<<"  ";
                }
                for(int j =i;j>=1;j--){
                    cout<<j<<" ";
                }
                cout<<endl;
    }
}
void pattern13(int n){
    int num =1;
    for (int i =1; i<=n; i++){
        for (int j =1; j<=i;j++){
            cout<<num<<" ";
            num =num +1;
        }
        cout<<endl;
    }
}
void pattern14 (int n){
    // A
    // A B
    // A B C
    // A B C D
    // A B C D E
    for (int i =0; i<n; i++){
        for (char ch ='A'; ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern15(int n){
    // A B C D E
    // A B C D
    // A B C
    // A B
    // A
    for(int i =0; i<n; i++){
        for (char ch = 'A'; ch <'A'+(n-i); ch ++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n){
    // A
    // B B
    // C C C
    // D D D D
    for (int i =0; i<n; i++){
        char ch ='A' + i;
        for (int j =0; j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern17(int n){
//      A
//     ABA
//    ABCBA
//   ABCDCBA
    for (int i =0; i<n; i++){
        for (int j =0; j<n-i-1;j++){
            cout<< " ";
        }
        char ch ='A';
        int breakpoint = (2*i+1)/2;
        for (int j = 0; j<2*i+1; j++){
            cout<<ch;
            if (j< breakpoint) ch++;
            else ch--;
        }
        cout<<endl;
    }
}
void pattern18(int n){
    // E 
    // D E 
    // C D E 
    // B C D E 
    // A B C D E 
    for (int i =0; i<n;i++){
        for (char ch = ('A'+n-1)-i; ch <= 'A'+n-1;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern19(int n){
    // E 
    // E D 
    // E D C 
    // E D C B 
    // E D C B A
    for (int i = 0; i < n; i++) {
      for (char ch = ('A') + n - 1; ch >= (('A') + n - 1) - i; ch--) {
          cout<<ch<<" ";
      }
      cout<<endl;
    }
}
void pattern20(int n){
    // ********
    // ***  ***
    // **    **
    // *      *
    // *      *
    // **    **
    // ***  ***
    // ********

    int space=0;
    for (int i =0; i<n; i++){
        //stars
        for (int j =0; j<n-i; j++){
            cout<<"* ";
        }

        //space
        for (int j =0; j<space; j++){
            cout<<"  ";
        }
        //stars
        for (int j =0; j<n-i; j++){

            cout<<"* ";
        }
        space+=2;
        cout<<endl;
    }
    space=6;
    for (int i =1; i<=n; i++){
        //stars
        for (int j =0; j<i; j++){
            cout<<"* ";
        }

        //space
        for (int j =0; j<space; j++){
            cout<<"  ";
        }
        //stars
        for (int j =0; j<i; j++){
            cout<<"* ";
        }
        space-=2;
        cout<<endl;
    }
}
void pattern21(int n){
    int space =6;
    for (int i =1; i<=n;i++){
        //stars
        for (int j =0; j<i; j++){
            cout<<"* ";
        }
        //space
        for (int j =0; j<space; j++){
            cout<<"  "; 
        }
        //stars
        for (int j = 0; j<i;j++){
            cout<<"* ";
        }
        space -=2;
        cout<<endl;
    }
    space = 2;
    for (int i=0; i<n ;i++){
        //stars
        for (int j=0; j<(n-1)-i ; j++){
            cout<<"* ";
        }
        //space
        for (int j =0; j<space; j++){
            cout<<"  ";
        }
        //stars
        for (int j=0; j<(n-1)-i;j++){
            cout<<"* ";
        }
        space+=2;
        cout<<endl;
    }

}
void pattern22(int n){
    // * * * * * *
    // *         *
    // *         *
    // *         *
    // *         *
    // * * * * * *
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (i==0 || j==0 || j==n-1 ||i==n-1){
                cout<<"* ";
            }
            else{cout<<"  ";}
        }
        cout<<endl;
    }
}
void pattern23(int n){
    // 4 4 4 4 4 4 4
    // 4 3 3 3 3 3 4
    // 4 3 2 2 2 3 4
    // 4 3 2 1 2 3 4
    // 4 3 2 2 2 3 4
    // 4 3 3 3 3 3 4
    // 4 4 4 4 4 4 4
    for (int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top= i;
            int left =j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;

            cout<<(n-min(min(top,down), min(left,right)))<<" ";
        }
        cout<<endl;
    }
}

int main (){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        pattern23(n);
    }
    return 0;
}