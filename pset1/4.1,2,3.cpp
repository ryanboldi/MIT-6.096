//4 Factorials Gone Wrong

// 4.1: The correct results for these inputs.
// 4.2:  -1 factorial was apparently 1, which is not true. I could check for negative numbers when the user inputs the number.
// 4.3:  13 factorial is the smallest number that breaks the output.
//       possible explanation: 13! is bigger than MAX_INT.
//

#include <iostream>
using namespace std;

int main()
{
    short number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The factorial of " << number << " is ";
    int accumulator = 1;
    for(; number > 0; accumulator *= number--);
    cout << accumulator << endl;

    return 0;
}
