// 3 fix the function

// 3.1: Error: 'printNum' not declared in this scope. This is because the definition of the function printNum is AFTER the call to it.
//      1: I could solve this by moving the function before main.
//      2: I could also solve this by creating a function declaration at the top of the file with just "void printNum(int number);" to tell the compiler that this function exists.

// 3.2: Error: 'number' not declared in this scope. This is because there is no corresponding argument for number in the function definition.
//      1: I could solve this by adding 'int number' to the function definition.
//      2: I could also solve this by setting the number variable outside the main function to make it a global function.
//      Which is better: 1 is much better as I do not want many global variables cluttering up my namespace.

// 3.3: The issue here is that the doubleNumber function is not changing the actual variable that is called num, but instead changing a local copy of it that the function has created.
//      1: to solve this, I will pass the number by reference instead.

#include <iostream>
void doubleNumber (int *num) {*num = *num * 2;}

int main() {
    int num = 35;
    doubleNumber(&num);
    std::cout << num;
    return 0;
}
