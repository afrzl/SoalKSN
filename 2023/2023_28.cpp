#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int m = 30, n = 10;
    for (int i = 0; i < m; i++) //bergerak dari i = 0 sampai i < 30
    {
        if (i % 2 == 0) //kalo i genap
            for (int j = 0; j < i; j++) //cetak bintang sebanyak i kali
                cout << "*";
        else //kalo i ganjil
            for (int j = 0; j < n; j++) //cetak bintang sebanyak n kali
                cout << "*";
    }
    return 0;
}

/*
    PENJELASAN:
    i = 0 -> cetak bintang sebanyak i -> 0 bintang
    i = 1 -> cetak bintang sebanyak n -> 10 bintang
    i = 2 -> cetak bintang sebanyak i -> 2 bintang
    i = 3 -> cetak bintang sebanyak n -> 10 bintang
    i = 4 -> cetak bintang sebanyak i -> 4 bintang
    i = 5 -> cetak bintang sebanyak n -> 10 bintang
    i = 6 -> cetak bintang sebanyak i -> 6 bintang
    i = 7 -> cetak bintang sebanyak n -> 10 bintang
    i = 8 -> cetak bintang sebanyak i -> 8 bintang
    i = 9 -> cetak bintang sebanyak n -> 10 bintang
    i = 10 -> cetak bintang sebanyak i -> 10 bintang
    i = 11 -> cetak bintang sebanyak n -> 10 bintang
    i = 12 -> cetak bintang sebanyak i -> 12 bintang
    i = 13 -> cetak bintang sebanyak n -> 10 bintang
    i = 14 -> cetak bintang sebanyak i -> 14 bintang
    i = 15 -> cetak bintang sebanyak n -> 10 bintang
    i = 16 -> cetak bintang sebanyak i -> 16 bintang
    i = 17 -> cetak bintang sebanyak n -> 10 bintang
    i = 18 -> cetak bintang sebanyak i -> 18 bintang
    i = 19 -> cetak bintang sebanyak n -> 10 bintang
    i = 20 -> cetak bintang sebanyak i -> 20 bintang
    i = 21 -> cetak bintang sebanyak n -> 10 bintang
    i = 22 -> cetak bintang sebanyak i -> 22 bintang
    i = 23 -> cetak bintang sebanyak n -> 10 bintang
    i = 24 -> cetak bintang sebanyak i -> 24 bintang
    i = 25 -> cetak bintang sebanyak n -> 10 bintang
    i = 26 -> cetak bintang sebanyak i -> 26 bintang
    i = 27 -> cetak bintang sebanyak n -> 10 bintang
    i = 28 -> cetak bintang sebanyak i -> 28 bintang
    i = 29 -> cetak bintang sebanyak n -> 10 bintang
    i = 30 -> cetak bintang sebanyak i -> 30 bintang

    CARA CEPAT: 10 * 15 + (15 / 2 * (2*0 + (14) * 2)) = 150 + 210 = 360
*/