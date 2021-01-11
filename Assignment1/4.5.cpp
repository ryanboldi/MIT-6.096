// 4.5 Rewriting Factorial II

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
    switch(number){
    case 0:
        cout << 1;
        break;
    case 1:
        cout << 1;
        break;
    case 2:
        cout << 2;
        break;
    case 3:
        cout << 6;
        break;
    case 4:
        cout << 24;
        break;
    case 5:
        cout << 120;
        break;
    case 6:
        cout << 720;
        break;
    case 7:
        cout << 5040;
        break;
    case 8:
        cout << 40320;
        break;
    case 9:
        cout << 362880;
        break;
     case 10:
        cout << 3628800;
        break;
     default:
        long accumulator = 3628800;
        for(; number > 10; accumulator *= number--);
        cout << accumulator << endl;
    }

    return 0;
}
