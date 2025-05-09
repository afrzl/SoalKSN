#include <iostream>
#include <vector>
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
    vector<int> A = {0,1,2,3,4,5,6};
    vector<int> B = {-2,-1,0,1,2,3,4};
    vector<int> C = {4,3,2,1,0,-1,-2};
    vector<int> D = {-6,-5,-4,-3,-2,-1,0};
    vector<int> E = {-1,0,1,0,-1,0,1};
  
    cout << "A. dua_mata({0,1,2,3,4,5,6}, 0, 6) = " << (dua_mata(A, 0, 6) ? "TRUE" : "FALSE") << endl;
    cout << "B. dua_mata({-2,-1,0,1,2,3,4}, 0, 6) = " << (dua_mata(B, 0, 6) ? "TRUE" : "FALSE") << endl;
    cout << "C. dua_mata({4,3,2,1,0,-1,-2}, 0, 6) = " << (dua_mata(C, 0, 6) ? "TRUE" : "FALSE") << endl;
    cout << "D. dua_mata({-6,-5,-4,-3,-2,-1,0}, 0, 6) = " << (dua_mata(D, 0, 6) ? "TRUE" : "FALSE") << endl;
    cout << "E. dua_mata({-1,0,1,0,-1,0,1}, 0, 6) = " << (dua_mata(E, 0, 6) ? "TRUE" : "FALSE") << endl;
  
    return 0;
}