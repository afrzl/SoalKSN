#include <iostream>
using namespace std;

int panas(int X) {
    if (X == 0) return 0;
    else return (X % 10) + panas(X / 10);
}

int dingin(int X, int Y) {
    int air = 0;
    while (panas(air) != X) air = air + Y;
    return air;
}

int main() {
    cout << "dingin(2, 35) = " << dingin(2, 35) << endl;
  
    return 0;
}