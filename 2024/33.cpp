#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double t1000 = 20; // waktu untuk N = 1000
    double t2000 = 22; // waktu untuk N = 2000
  
    // Menemukan parameter a dan b dari model t(N) = a * log2(N) + b
    double a = (t2000 - t1000) / (log2(2000) - log2(1000));
    double b = t1000 - a * log2(1000);
  
    // Menghitung waktu untuk N = 8000
    double t8000 = a * log2(8000) + b;
  
    cout << "Model waktu: t(N) = " << a << " * log2(N) + " << b << endl;
    cout << "Waktu untuk N = 8000: " << t8000 << " detik" << endl;
  
    return 0;
}