// 4.4 Rewriting Factorial

#include <iostream>
using namespace std;

int main()
{
    short number;
    cout << "Enter a number: ";
    if (!(cin >> number) || number < 0){
        cout << "This is not a valid number!" << endl;
        return 1;
    }

    cout << "The factorial of " << number << " is ";
    int accumulator = 1;
    for(; number > 0; accumulator *= number--);
    cout << accumulator << endl;

    return 0;
}
