// 3.2 Prime Numbers

#include <iostream>
using namespace std;

//declaration
bool isPrime(int n);

int main(){
    int N = 0;
    do{
        if(!(cin >> N)){
            cout << "Not a valid Number!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        } else if (N <= 0) {
            cout << "Not a valid Number!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        } else {
            int found = 0;
            int i = 0;
            while(found < N){
                if (isPrime(i)){
                    found++;
                    cout << i << " is prime (" << found << ")" << endl;
                }
                i++;
            }
        }
    }while(N <= 0);



    return 0;
}

bool isPrime(int n){
    int divisors = 0; // should be only 2 for primes

    for (int i = 1; i <= n; i++){
        if (n%i == 0){
            divisors++;
        } if (divisors > 2){
            break;//don't bother
        }
    }

    if (divisors == 2){
        return true;
    } else {
    return false;
    }
}
