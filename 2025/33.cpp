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

int MAKS_DUA(string S, string &bestT)
{
    int N = S.length();
    int best = 0;
    bestT = "";

    for (int len = 3; len <= N; len++)
    {
        unordered_map<string, int> freq;
        for (int i = 0; i <= N - len; i++)
        {
            string sub = S.substr(i, len);
            freq[sub]++;
        }

        for (auto item : freq)
        {
            string sub = item.first;
            int cnt = item.second;
            if (cnt > best)
            {
                best = cnt;
                bestT = sub;
                reverse(bestT.begin(), bestT.end());
            }
        }
    }

    return best;
}

int main()
{
    string S = "BBABAABBAAABBABBAAABBBAAABBABBA";
    string TTerbaik;

    int hasilMaks = MAKS_DUA(S, TTerbaik);

    cout << "S = " << S << endl;
    cout << "Nilai maksimum DUA(S, T) untuk |T| >= 3 adalah " << hasilMaks << endl;
    cout << "Contoh T yang mencapai maksimum: " << TTerbaik << endl;
    cout << "Verifikasi DUA(S, TTerbaik) = " << DUA(S, TTerbaik) << endl;

    return 0;
}