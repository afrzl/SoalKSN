#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool dua_mata(vector<int> A, int kiri, int kanan) {
    if (kiri == kanan) {
        return (A[kiri] == 0);
    } else {
        int mid = (kiri + kanan) / 2;
        if (A[mid] < 0) {
            return dua_mata(A, kiri, mid-1);
        } else if (A[mid] > 0) {
            return dua_mata(A, mid+1, kanan);
        } else {
            return false;
        }
    }
}

int main() {
    int count = 0;
  
    // Untuk efisiensi, kita analisis path rekursif
    // Path 1: A[3] = -1, A[1] = -1, A[0] = 0
    // Path 2: A[3] = -1, A[1] = 1, A[2] = 0
    // Path 3: A[3] = 1, A[5] = -1, A[4] = 0
    // Path 4: A[3] = 1, A[5] = 1, A[6] = 0
  
    // Pada setiap path, indeks yang tidak disebutkan
    // dapat berisi -1, 0, atau 1 secara bebas
    // Jumlah indeks yang bebas pada setiap path = 4
    int free_indices = 4;
    int paths = 4;
  
    // Total vektor = jumlah path * 3^(jumlah indeks bebas)
    count = paths * pow(3, free_indices);
  
    cout << "Jumlah vektor A berbeda: " << count << endl;
  
    return 0;
}