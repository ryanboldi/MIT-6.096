// 3 fix the function

// 3.1: Error: 'printNum' not declared in this scope. This is because the definition of the function printNum is AFTER the call to it.
//      1: I could solve this by moving the function before main.
//      2: I could also solve this by creating a function declaration at the top of the file with just "void printNum(int number);" to tell the compiler that this function exists.

// 3.2: Error: 'number' not declared in this scope. This is because there is no corresponding argument for number in the function definition.
//      1: I could solve this by adding 'int number' to the function definition.
//      2: I could also solve this by setting the number variable outside the main function to make it a global function.
//      Which is better: 1 is much better as I do not want many global variables cluttering up my namespace.

// 3.3: The issue here is that the doubleNumber function is not changing the actual variable that is called num, but instead changing a local copy of it that the function has created.
//      To solve this, I will pass the number by reference instead.

//#include <iostream>
//void doubleNumber (int *num) {*num = *num * 2;}

//int main() {
//    int num = 35;
//    doubleNumber(&num);
//    std::cout << num;
//    return 0;
//}

// 3.4: this seems to work exactly as intended without changing anything. 1213 is being printed even though nothing is being returned from the function.
//      I am guessing there is some niceness that my compiler is doing to automatically return any created ints as the function has an int return type.

// 3.5: too many arguments to function because we are passing 3 to it, yet we only define x and y.
//      To solve this, i would simply increase the amount of arguments to the sum function from 2 to 3. Maybe include a const int z.

//int sum(const int x, const int y, const int z){
//    return x+y+z;
//}

//int main() {
//    std::cout << sum(1,2,3);
//    return 0;
//}


//3.6: I am getting an invalid conversion from int* to int error.
//     To solve this issue, i just ensured that yPtr is defined as a pointer from the beginning by changing it to *yPtr.

#include <iostream>
const int ARRAY_LEN = 10;

int main(){
    int arr[ARRAY_LEN] = {10}; // all other elements will be implicitly created?

    //std::cout << *arr;
    int *xPtr = arr, *yPtr = arr + ARRAY_LEN - 1;

    std::cout << *xPtr << " " << *yPtr; // should output 10 0
    return 0;
}
