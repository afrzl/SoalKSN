#include <iostream>
using namespace std;

int main()
{
    char x[11]={'I','N','F','O','R','M','A','T','I','K','A'};
    for (int i = 0; i < 11; i++)
    {
        x[i] = x[13 - (i + 3)];
        x[13 - (i + 3)] = x[10 - i];
        x[10 - i] = x[i];
    }
    cout << x << endl;
}