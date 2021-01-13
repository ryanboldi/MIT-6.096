// 6 Array Operations

#include <iostream>
using namespace std;

const int LENGTH = 3;
const int WIDTH = 3;

// 6.1
void printArray(const int arr[], const int length){
    for(int i = 0; i < length-1; i++){
        cout << arr[i] << ", ";
    }
    cout << arr[length - 1] << endl;
}

// 6.2
void reverseArray(int arr[], const int length){
    int temp[length];

    for (int i = 0; i < length; i++){
        temp[i] = arr[i];
    }

    for (int i = 0; i < length; i++){
        arr[i] = temp[length - i - 1];
    }
}

// 6.3
void transposeArray(const int input[][LENGTH], int output[][WIDTH]){
    for (int i = 0; i < LENGTH; i++){
        for (int j = 0; j < WIDTH; j++){
            output[i][j] = input[j][i];
        }
    }
}

int main(void){
    int arr[4] = {1,2,3,4};
    int arr_length = 4;

    printArray(arr, arr_length);
    reverseArray(arr, arr_length);
    printArray(arr, arr_length);
    return 0;
}
