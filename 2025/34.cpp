#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int DUA(string S, string T)
{
    int N = S.length();
    int M = T.length();
    int P = 0;
    for (int i = 0; i <= N - M; i++)
    {
        int Q = 1;
        for (int j = 0; j < M; j++)
        {
            if (S[i + j] != T[M - 1 - j])
            {
                Q = 0;
            }
        }
        P += Q;
    }
    return P;
}

int JUMLAH_T_DUA_SAMA_DENGAN_K(string S, int K)
{
    int N = S.length();
    int jumlahT = 0;

    for (int len = 1; len <= N; len++)
    {
        unordered_map<string, int> freq;
        for (int i = 0; i <= N - len; i++)
        {
            string sub = S.substr(i, len);
            freq[sub]++;
        }

        for (auto &item : freq)
        {
            int cnt = item.second;
            if (cnt == K)
            {
                jumlahT++;
            }
        }
    }

    return jumlahT;
}

int main()
{
    string S = "ACCAAACCA";

    int jawaban = JUMLAH_T_DUA_SAMA_DENGAN_K(S, 2);

    cout << "S = " << S << endl;
    cout << "Banyak kemungkinan T sehingga DUA(S, T) = 2 adalah " << jawaban << endl;

    return 0;
}