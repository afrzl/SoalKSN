#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int RAHASIA(vector<int> A)
{
    int N = A.size();
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        int ctr = 0;
        for (int j = 0; j < N; j++)
        {
            if (A[j] > A[i])
            {
                ctr += 1;
            }
            else if (A[j] < A[i])
            {
                ctr -= 1;
            }
        }
        if (ctr == 0)
        {
            sum += A[i];
        }
    }
    return sum;
}

int PETAK(vector<vector<int>> B)
{
    int N = B.size();
    vector<int> C;
    for (int i = 0; i < N; i++)
    {
        C.push_back(RAHASIA(B[i]));
    }
    return RAHASIA(C);
}

int MAKS_PETAK_SOAL_37()
{
    int totalBilangan = 25;
    int ukuranBaris = 5;

    int minimalBanyakBilanganTinggi = 3 * 3;
    int kandidatMaks = totalBilangan - minimalBanyakBilanganTinggi + 1;

    return kandidatMaks;
}

int main()
{
    int jawabanMaks = MAKS_PETAK_SOAL_37();
    cout << "Hasil kembalian paling besar PETAK adalah " << jawabanMaks << endl;

    vector<vector<int>> contoh = {
        {1, 2, 17, 18, 19},
        {3, 4, 20, 21, 22},
        {5, 6, 23, 24, 25},
        {7, 8, 9, 10, 11},
        {12, 13, 14, 15, 16}};

    cout << "Verifikasi dengan contoh pengisian: " << PETAK(contoh) << endl;
    
    return 0;
}