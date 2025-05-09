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
    int count = 0;
    
    // Mencoba semua kemungkinan string dengan panjang 3
    for (char a = 'A'; a <= 'Z'; a++) {
        for (char b = a; b <= 'Z'; b++) {  // b harus >= a
            for (char c = b; c <= 'Z'; c++) {  // c harus >= b
                string s = "";
                s += a;
                s += b; 
                s += c;
                
                if (cek(s)) {
                    count++;
                    
                    cout << s << endl;
                }
            }
        }
    }
    
    cout << "Jumlah string S yang memenuhi: " << count << endl;
    
    return 0;
}