#include <iostream>

int A, B, C;

int main()
{
    std::cin >> A >> B >> C;
    A = B;
    B = C;
    C = A;
    std::cout << A + B + C << std::endl;
}