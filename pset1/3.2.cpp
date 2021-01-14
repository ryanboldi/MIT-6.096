// 3.2 Basic Statistics

#include <iostream>
#include <climits>

using namespace std;

int main(){
    double mean;
    int total = 0;
    int MAX = INT_MIN;
    int MIN = INT_MAX;
    int range = 0;

    int N;
    cout << "How many numbers are in your list? : ";
    if (!(cin >> N)){
        cout << "Not a valid number!" << endl;
    } else {
        for (int i = 0; i < N; i++){
            bool good = false;
            do{
                int curr;
                if(!(cin >> curr)){
                    cout << "Not a valid number!" << endl;
                    cin.clear();
                    cin.ignore(1000,'\n');
                } else {
                    good = true;
                    total += curr;

                    if(curr > MAX){
                        MAX = curr;
                    }

                    if (curr < MIN){
                        MIN = curr;
                    }
                }
            }while(good == false);
        }
        mean = total/N;
        range = MAX-MIN;
        cout << endl;
        cout << "Mean: " << mean << endl;
        cout << "Max: " << MAX << endl;
        cout << "Min: " << MIN << endl;
        cout << "Range: " << range << endl;
    }
}
