#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[10] = {7, 4, 5, 0, 2, 3, 8, 1, 9, 6};
    int sebelum = 0;
    for (int i = 0; i < 10; i++)
    {
        sebelum += a[i]; //sebelum = 45
    }
    a[a[a[a[a[a[a[7]]]]]]] = a[a[a[a[a[a[a[6]]]]]]];
    /*
        PENJELASAN: 
        a[a[a[a[a[a[a[7]]]]]]] -> a[a[a[a[a[a[1]]]]]] -> a[a[a[a[a[4]]]]] -> a[a[a[a[2]]]] -> a[a[a[5]]] -> a[a[3]] -> a[0]

        a[a[a[a[a[a[a[6]]]]]]] -> a[a[a[a[a[a[8]]]]]] -> a[a[a[a[a[9]]]]] -> a[a[a[a[6]]]] -> a[a[a[8]]] -> a[a[9]] -> a[6]

        Jadi, intinya a[0] = a[6] -> a[0] = 8
        array sekarang -> a[10] = {8, 4, 5, 0, 2, 3, 8, 1, 9, 6};
    */
    int setelah = 0;
    for (int i = 0; i < 10; i++)
    {
        setelah += a[i]; //46
    }
    int ans = setelah - sebelum; //46 - 45 = 1
    cout << ans << endl;
    return 0;
}
