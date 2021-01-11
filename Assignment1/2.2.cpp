//2.2 "Hello World II"

#include <iostream>
using namespace std;

int a = 0;

int main(void){
    cout << "a = ";
    if (!(cin >> a)){
        cout << "Not an integer!" << endl;
    } else if (a < 0){
        cout << "Needs to be non negative!" << endl;
    } else {
        cout << "With a for loop: " << endl;
        for (int i = 0; i < a; i++){
            cout << "Hello, World!" << endl;
        }
        cout << endl;

        cout << "With a while loop: " << endl;
        int j = a;
        while(j > 0){
            cout << "Hello, World!" << endl;
            j--;
        }
        cout << endl;

        cout << "With a do while loop: " << endl;
        int k = a;
        do{
            cout << "Hello, World!" << endl;
            k--;
        } while (k > 0);
    }
}
