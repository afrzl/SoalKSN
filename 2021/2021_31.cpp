#include <iostream>

int kelinci;
int kurakura;
int lap_satu()
{
    kelinci = 0;
    kurakura = 0;
    int langkah = 0;
    do
    {
        kelinci = (kelinci * 2 + 1) % 40;
        kelinci = (kelinci * 2 + 1) % 40;
        kurakura = (kurakura * 2 + 1) % 40;
        langkah++;
    } while(kelinci != kurakura);
    return langkah;
}

int lap_dua()
{
    lap_satu();
    kelinci = 0;
    int langkah = 0;
    do
    {
        kelinci = (kelinci * 2 + 1) % 40;
        kurakura = (kurakura * 2 + 1) % 40;
        langkah++;
    } while(kelinci != kurakura);
    return langkah;
}

int lap_tiga()
{
    lap_dua();
    int langkah = 0;
    do
    {
        kelinci = (kelinci * 2 + 1) % 40;
        langkah++;
    } while(kelinci != kurakura);
    return langkah;
}

int main()
{
    std::cout << lap_tiga() << std::endl;
}