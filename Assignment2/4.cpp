#include <iostream>
using namespace std;

//4.1 -> compiler knows which function to run based on the types of the inputs.
//int sum(const int a, const int b){
//    return a + b;
//}

//double sum(const double a, const double b){
//    return a + b;
//}

//4.2 -> because there are two different definitions for the function sum, the compiler is searching for the one to use based on the arguments,
//      and will convert all other arguments to being the correct type.
//      however, when one is an int and one is a double the issue created is that both functions are equally valid for the compiler so we overload.

//4.3
//int sum(const int a, const int b, const int c){
//    return a + b + c;
//}

//int sum(const int a, const int b, const int c, const int d){
//    return a + b + c + d;
//}

//4.4 -> this creates an issue because there are two valid functions that take 4 arguments with the name 'sum'. Therefore, the compiler does not know which one to use.
//int sum(const int a, const int b, const int c = 0, const int d = 0){
//    return a + b + c + d;
//}

//4.5
//int sum(const int numbers[], const int length){
//    int currentTotal = 0;
//    for (int i = 0; i < length; i++){
//        currentTotal += numbers[i];
//    }
//    return currentTotal;
//}

//4.6
int sum(const int numbers[], const int length){
    if (length == 0){
        return 0;
    } else {
        return numbers[0] + sum(numbers + 1, length - 1);
    }
}


int main(){
    int numbers[] = {1,2,3,4};
    cout << sum(numbers,4);

    return 0;
}

