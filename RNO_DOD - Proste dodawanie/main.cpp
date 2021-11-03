#include <iostream>

using namespace std;

int dodawanie(int n)
{
        int suma = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> tab[i];
        }

        for(int i = 0; i < n; i++)
        {
            suma = suma + tab[i];
        }
    return suma;
}
int main()
{
    int ileTestow;
    cin >> ileTestow;

    while(ileTestow--)
    {
        int n; //tyle jest liczb do zsumowania
        cin >> n;
        int *tab = new int[n]; //tworzymy nową tablicę

        int wynik;

        wynik = dodawanie(n);
        cout << wynik;

    }


    return 0;
}
