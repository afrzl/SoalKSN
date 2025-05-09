#include <iostream>
#include <string>
using namespace std;

bool cek(string S) {
    int n = S.length();
    for (int i = 0; i < n-1; i++) {
        if (S[i] > S[i+1]) return false;
    }
    return true;
}

int main() {
    cout << "A. cek(\"BEGINI\") = " << (cek("BEGINI") ? "TRUE" : "FALSE") << endl;
    cout << "B. cek(\"BEGITU\") = " << (cek("BEGITU") ? "TRUE" : "FALSE") << endl;
    cout << "C. cek(\"BERAPA\") = " << (cek("BERAPA") ? "TRUE" : "FALSE") << endl;
    cout << "D. cek(\"BERUPA\") = " << (cek("BERUPA") ? "TRUE" : "FALSE") << endl;
    cout << "E. cek(\"BETAPA\") = " << (cek("BETAPA") ? "TRUE" : "FALSE") << endl;
    
    return 0;
}