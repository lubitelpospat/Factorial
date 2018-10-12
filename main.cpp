#include <iostream>

using namespace std;

int Factorial(int x) {
    if (x<0){
        return 1;
    }
    else if (x==0) {
        return 1;
    }
    int f=1;
    while (x>0){
        f*=x;
        x--;
    }
    return f;
}
