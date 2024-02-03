#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 12, b = 23, c = 45, d = 78;
    int x;
    if (a > b) //false, langsung loncat ke else (line 33)
    {
        if (a > c)
        {
            if (d > a)
            {
                x = d * d;
            }
            else
            {
                x = a * a;
            }
        }
        else
        {
            if (d > c)
            {
                x = d * d;
            }
            else
            {
                x = c * c;
            }
        }
    }
    else
    {
        if (b > c) //false, langsung loncat ke else (line 46)
        {
            if (d > b)
            {
                x = d * d;
            }
            else
            {
                x = b * b;
            }
        }
        else
        {
            if (d > c) //true
            {
                x = d * d; //eksekusi line ini -> x = 78 * 78 = 6084
            }
            else
            {
                x = c * c;
            }
        }
    }

    cout << x << endl;

    return 0;
}
