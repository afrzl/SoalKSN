#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int GSI(vector<int> B, int x, int y)
{
    return B[y] - B[x - 1];
}

int FUN(vector<int> A)
{
    int N = A.size();
    vector<int> B;
    B.push_back(0);
    for (int i = 0; i < N; i++)
    {
        B.push_back(B[i] + A[i]);
    }
    cout << "Isi vektor B = {";
    for (int i = 0; i < (int)B.size(); i++)
    {
        if (i > 0)
            cout << ", ";
        cout << B[i];
    }
    cout << "}" << endl;

    int out = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j++)
        {
            out = max(out, GSI(B, i, j));
        }
    }
    return out;
}

int main()
{
    vector<int> A = {1, 2, 3, 4, 5};

    vector<int> B;
    B.push_back(0);
    for (int i = 0; i < (int)A.size(); i++)
    {
        B.push_back(B[i] + A[i]);
    }

    int opsiA = GSI(B, 1, 4);
    int opsiB = GSI(B, 2, 4);
    int opsiC = GSI(B, 4, 5);
    int opsiD = GSI(B, 5, 5);
    int opsiE = GSI(B, 3, 4);

    cout << "A. GSI(B, 1, 4) = " << opsiA << endl;
    cout << "B. GSI(B, 2, 4) = " << opsiB << endl;
    cout << "C. GSI(B, 4, 5) = " << opsiC << endl;
    cout << "D. GSI(B, 5, 5) = " << opsiD << endl;
    cout << "E. GSI(B, 3, 4) = " << opsiE << endl;

    int nilaiTerbesar = opsiA;
    char jawaban = 'A';
    if (opsiB > nilaiTerbesar)
    {
        nilaiTerbesar = opsiB;
        jawaban = 'B';
    }
    if (opsiC > nilaiTerbesar)
    {
        nilaiTerbesar = opsiC;
        jawaban = 'C';
    }
    if (opsiD > nilaiTerbesar)
    {
        nilaiTerbesar = opsiD;
        jawaban = 'D';
    }
    if (opsiE > nilaiTerbesar)
    {
        nilaiTerbesar = opsiE;
        jawaban = 'E';
    }

    cout << "Hasil kembalian paling besar: opsi " << jawaban
         << " dengan nilai " << nilaiTerbesar << endl;

    cout << "Nilai FUN(A) = " << FUN(A) << endl;

    return 0;
}