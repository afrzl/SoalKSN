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

bool ricek(string S) {
    int n = S.length();
    for (int i = 0; i < n-1; i++) {
        if (S[i] <= S[i+1]) return true;
    }
    return false;
}

int main() {
    string test_cases[] = {"ABC", "CBA", "ABA", "AAA", "A", ""};
    
    cout << "Perbandingan hasil fungsi cek(S) dan ricek(S):" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "| String | cek(S) | ricek(S) | Sama? |" << endl;
    cout << "---------------------------------------------" << endl;
    
    for (string s : test_cases) {
        bool cek_result = cek(s);
        bool ricek_result = ricek(s);
        
        cout << "| \"" << s << "\"";
        if (s.empty()) cout << "    ";
        else if (s.length() == 1) cout << "   ";
        else if (s.length() == 2) cout << "  ";
        else cout << " ";
        
        cout << "| " << (cek_result ? "true " : "false") << " | ";
        cout << (ricek_result ? "true  " : "false ") << " | ";
        cout << (cek_result == ricek_result ? "Ya  " : "Tidak") << " |" << endl;
    }
    
    cout << "---------------------------------------------" << endl;
    
    return 0;
}