#include <iostream>
#include <string>
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

int main()
{
    cout << "Nilai RAHASIA({16, 5, 20, 1, 11}) = " << RAHASIA({16, 5, 20, 1, 11}) << endl;

    return 0;
}