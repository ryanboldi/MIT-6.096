// 5 Estimating Pi

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    srand(time(0));
    double x = (double)rand()/RAND_MAX;
    double y = (double)rand()/RAND_MAX;
    cout << x << "  " << y;
    return 0;
}
