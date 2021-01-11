// 5 Estimating Pi

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double EstimatePi(const int throws){
    srand(time(0));
    int inCirc = 0;

    for (int i = 0; i < throws; i++){
        double x = (double)rand()/RAND_MAX;
        double y = (double)rand()/RAND_MAX;

        //don't need to sqrt because r = 1;
        if (x*x + y*y < 1){
            inCirc ++;
        }
    }

    return (4*(double)inCirc/throws);
}

int main(){
    cout << EstimatePi(50000);
    return 0;
}
