#include <iostream>
#include <string>
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

int main()
{
    cout << "Hasil dari DUA(“ABCBAABCCBAABC”, ”CBA”) = " << DUA("ABCBAABCCBAABC", "CBA") << endl;

    return 0;
}