#include <iostream>

int A, B, C;
int main()
{
    std::cin >> A >> B >> C;
    if (A - 2 != 3 * B)
    {
        C = C * 0;
    }
    A = A - 3;
    B = B - 3;
    A = A * 3;
    if (A < B)
    {
        C = 1;
    }
    if (A > B)
    {
        C = 2;
    }
    std::cout << C << std::endl;
}