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
    cout << "TIGA(2) = " << TIGA(2) << endl;
    cout << "TIGA(6) = " << TIGA(6) << endl;
    cout << "TIGA(14) = " << TIGA(14) << endl;
    cout << "TIGA(18) = " << TIGA(18) << endl;
    cout << "TIGA(25) = " << TIGA(25) << endl;
    
    return 0;
}