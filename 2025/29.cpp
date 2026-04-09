#include <iostream>
#include <string>
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

    cout << "Nilai FUN(A) = " << FUN(A) << endl;

    return 0;
}