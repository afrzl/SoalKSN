#include <iostream>

int cari(int left, int right)
{
    int mid = left;
    int res = 0;
    while (mid <= right)
    {
        if (mid % 11 == 0)
        {
            res++;
            mid++;
        }
        else if (mid % 12 == 0)
        {
            mid++;
        }
        else
        {
            if (mid % 4 == 0)
            {
                res++;
            }
            mid++;
        }
    }
    return res;
}

int main()
{
    std::cout << cari(1000, 2000) << std::endl;
    return 0;
}
