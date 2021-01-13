// 6 Array Operations

#include <iostream>
using namespace std;

// 6.1
void printArray(int *arr, int length){
    for(int i = 0; i < length-1; i++){
        cout << arr[i] << ", ";
    }
    cout << arr[length - 1];
}


int main(void){
    int arr[4] = {1,2,3,4};
    int arr_length = 4;


    printArray(arr, arr_length);
    return 0;
}
