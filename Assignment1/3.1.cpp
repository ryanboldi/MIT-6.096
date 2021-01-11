//3.1 More Programs

// 1: Did not compile. Error: conflicting declaration 'char arg1'.
// therefore, we cannot declare the same name within a block with two different meanings.

// 2: Compiled. Printed out "A".
// therefore, if we declare an identifier in a block and then redeclare that same identifier in a nested block, the variable name is only valid within the current scope.

// 3: The declaration that occurred in the block where the variable is accessed.

// 4: After the inner block, the outer declaration is used instead, so -1 is printed.

// 5: Move line 9 to the top.

#include <iostream>

using namespace std;

int main(){
    int arg1;
    arg1 = -1;
    {
        char arg1 = 'A';
    }
    cout << arg1 << "\n";
    return 0;
}
