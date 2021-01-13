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

// 7.2
void swapIntRef(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// 7.3
void swapIntPtr(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

// 7.4
void swapPtr(int **a, int **b){
    int *t = *a;
    *a = *b;
    *b = t;
}

int main(void){
//7.5
    char *oddOrEven = "Never odd or even";
    char *nthCharPtr = &oddOrEven[5];
    nthCharPtr = oddOrEven + 3;
    cout << *nthCharPtr << endl;
    char **pointerPtr = &nthCharPtr;
    cout << pointerPtr << endl;
    cout << **pointerPtr << endl;
    nthCharPtr = nthCharPtr + 1;
    cout << nthCharPtr - oddOrEven << endl;

    return 0;
}
