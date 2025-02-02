// #include <iostream>
// using namespace std;

// class ReversedWords{
//     public:
//         string reversedString (string s){
//             int i, j = 0;
//             int wordCount = 0;
//             int n = s.length();
//             string* arr = new string[n];
            
//             while (i < n) {
//                 while (i < n && s[i] != ' ') i++;
//                 j = i;
//                 while (j < i && s[j] != ' ') j++;

//                 if (i > j){
//                     arr[wordCount] = s.substr(i, j-1);
//                     wordCount++;
//                 }

//                 i = j + 1;
//             }

//             string result = "";
//             cout << arr;

//             return s;
//         }
// };
// int main (){
//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;

string reverseWords(const string& s) {
    string result;
    int start = 0, end = 0;

    // Iterate through the string
    for (int i = 0; i <= s.size(); ++i) {
        // Check if we've reached the end of a word or the end of the string
        if (s[i] == ' ' || i == s.size()) {
            end = i; 
            // Extract the word
            string word = s.substr(start, end - start);
            // Add the word to the beginning of the result
            if (!result.empty()) {
                result = " " + result; 
            }
            result = word + result;
            start = end + 1; // Move to the next word
        }
    }

    return result;
}

int main() {
    string str = "hello world";
    string reversedStr = reverseWords(str);
    cout << "Reversed string: " << reversedStr << endl;
    return 0;
}