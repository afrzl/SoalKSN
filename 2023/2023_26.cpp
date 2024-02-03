#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, d, x;
    cin >> a >> b >> c >> d;
    a = a + a;
    b = a + b;
    c = a + b + c;
    d = a + b + c + d;
    x = a + b + c + d;
    cout << x;
    return 0;
}

/*
    PENJELASAN :
    Jika program tersebut dijalankan dengan masukan 1 2 3 5 berapakah nilai x yang akan dicetak? 
    a = a + a; -> a = 1 + 1 = 2
    b = a + b; -> b = 2 + 2 = 4
    c = a + b + c; -> c = 2 + 4 + 3 = 9
    d = a + b + c + d; -> d = 2 + 4 + 9 + 5 = 20
    x = a + b + c + d; -> 2 + 4 + 9 + 20 = 35
    JAWABAN : 35
*/
