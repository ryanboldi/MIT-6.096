// 7 Pointers and Strings

#include <iostream>
using namespace std;

// 7.1
int lengthOfString(const char* str){
    int i = 0;
    while(*(str + i) != '\0'){
        cout << *(str + i) << endl;
        i++;
    }
    return i;
}



int main(void){
    const char *name;
    name = "Ryan";

    cout << lengthOfString(name);


    return 0;
}
