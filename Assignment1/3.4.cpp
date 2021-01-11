// 3.4 Multiples of Numbers

#include <iostream>
using namespace std;

int main(){
    int N;

    while(true){
        cin >> N;
        if (N%5 == 0){
            cout << N/5 << endl;
        } else if (N == -1){
            cout << "Goodbye!" << endl;
            break;
        }
        else {
            continue;
        }
    }
}
