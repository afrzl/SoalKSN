#include <iostream>
#include <string>
using namespace std;

int TIGA(int N)
{
    if (N <= 1)
    {
        return 1;
    }
    else if (N % 3 == 0)
    {
        return TIGA(N - 1) + TIGA(N - 3);
    }
    else if (N % 3 == 1)
    {
        return TIGA(N - 2);
    }
    else
    {
        return TIGA(N - 3);
    }
}

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += TIGA(i);
    }

    cout << "Jumlah nilai TIGA(1) - TIGA(100): " << sum << endl;

    return 0;
}