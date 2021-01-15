//2 Multi-Type min

#include <iostream>

// 2.1
template <typename T>
T min(const T a, const T b){
    if (a < b){
        return a;
    } else {
        return b;
    }
}

// 2.2
#define min(x, y) (x < y ? x : y)

int main(){
    std::cout << min(1,2);

    return 0;
}
