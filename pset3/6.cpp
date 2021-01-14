// 6 Strings

#include <iostream>
#include <string>

using namespace std;

string pigLatinify(string input);

int main(){
    pigLatinify("ryan");

    return 0;
}

string pigLatinify(string input){
    string VOWELS = "aeiouy";

    cout << (VOWELS.find(input.substr(0,1)) <= 5);
    //if(VOWELS.find(input.substr(0,1))){
    //   cout << "STARTS WITH VOWEL";
    //}

    return input;
}
