#include <iostream>
using namespace std;
int main()
{
    int A[5] = {1, 3, 5, 6, 18};
    int B[5] = {2, 4, 7, 11, 16};
    int C[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i = 0, j = 0, k = 0;
    while (i < 5 || j < 5) //SALAH HARUSNYA while (i < 5 && j < 5)
    {
        if (A[i] <= B[j])
        {
            C[k] = A[i];
            i++;
        }
        else
        {
            C[k] = B[j];
            j++;
        }
        k++;
    }
    if (i > j) //SALAH HARUSNYA if (i < j)
    {
        while (i < 5)
        {
            C[k] = A[i];
            i++;
            k++;
        }
    }
    else
    {
        while (j < 5)
        {
            C[k] = B[j];
            j++;
            k++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << C[i] <<" ";
    }
    return 0;
}