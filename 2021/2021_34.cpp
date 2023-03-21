#include <iostream>

int batu(int x, int y)
{
    if (x == 0)
    {
        return y;
    }
    else
    {
        return batu(y % x, x);
    }
}

int kertas(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (batu(i, j) == 1)
            {
                ans += n / i;
            }
        }
    }
    return ans;
}

int main()
{
    std::cout << kertas(100) << std::endl;
}