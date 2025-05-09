#include <iostream>
#include <vector>
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
    int target = 77;
    int count = 0;
    vector<pair<int, int>> valid_pairs;
  
    // Faktor dari 77: 1, 7, 11, 77
    vector<int> factors = {1, 7, 11, 77};
  
    // Nilai panas(77)
    int sum_digits_77 = panas(77);  // 7+7 = 14
  
    // Periksa untuk setiap faktor Y
    for (int Y : factors) {
        // Periksa setiap kemungkinan nilai X
        for (int X = 1; X <= sum_digits_77; X++) {
            // Hitung dingin(X, Y)
            int result = dingin(X, Y);
          
            // Jika hasil = 77, tambahkan ke daftar pasangan valid
            if (result == 77) {
                valid_pairs.push_back({X, Y});
                count++;
            }
        }
    }
  
    cout << "Jumlah pasangan <X, Y> yang valid: " << count << endl;
  
    // Menampilkan semua pasangan valid
    cout << "Pasangan <X, Y> valid:" << endl;
    for (auto pair : valid_pairs) {
        cout << "<" << pair.first << ", " << pair.second << ">" << endl;
    }
  
    return 0;
}