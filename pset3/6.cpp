// 6 Strings

#include <iostream>
#include <string>

using namespace std;

string pigLatinify(string input);

int main(){
    cout << pigLatinify("hello");

    return 0;
}

string pigLatinify(string input){
    string VOWELS = "aeiouy";
    string output;

    if (VOWELS.find(input.substr(0,1)) <= 5) {
        //STARTS WITH A VOWEL
        output = input + "-way";
    } else if (input.find("qu") == 0){
        output = input.substr(2,string::npos) + "-quay";
    } else {
        output = input.substr(1,string::npos) + "-" + input.substr(0,1) + "ay";
    }
    return output;
}
