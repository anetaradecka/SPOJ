#include <iostream>

using namespace std;

void odwrocTablice(int *tab, int *w_i);
unsigned long long int decNaBin(unsigned long long int liczba);
void potegowanie(unsigned long long int *p, int *w_i);
unsigned long long int binNaDec(unsigned long long int *p, int *tab, int *w_i);

int main()
{
    unsigned long long int liczba;

    cout<<"Podaj liczbe: ";
    while(cin>>liczba)
    {
        unsigned long long int wynik = decNaBin(liczba);
        cout << endl << "-----------------------------" << endl;
        cout << "Wynik to: " << wynik;
    }

    return 0;
}

unsigned long long int decNaBin(unsigned long long int liczba)
{

    int i = 0;
    int *tab = new int[63];

    cout << liczba << " w systemie binarnym: ";
    while(liczba)
    {
        tab[i++] = liczba%2;
        liczba /= 2;
    }

    for(int j=i-1; j>=0 ; j--)
        cout << tab[j] << " ";

    cout << endl << "i wynosi: " << i << endl;

    int *w_i = &i;
    cout << "Licznik wynosi: " << *w_i << endl;

    odwrocTablice(tab, w_i);

    cout << "Odwrocona tablica tab[]: ";
    for(int j = i-1; j >= 0; j--)
    {
        cout << tab[j] << " ";
    }
    cout << endl;

    unsigned long long int *p = new unsigned long long int[*w_i];
    potegowanie(p, w_i);

    cout << "Tablica poteg p[]: ";
    for(int j = 0; j < i; j++)
    {
        cout << p[j] << " ";
    }

    unsigned long long int wynik = binNaDec(p, tab, w_i);

    delete [] tab;
    delete [] p;

    return wynik;
}

unsigned long long int binNaDec(unsigned long long int *p, int *tab, int *w_i)
{
    unsigned long long int suma = 0;
    for(int j=0; j<*w_i; j++)
    {
        if(tab[j] == 1)
            suma += p[j];
    }
    return suma;
}

void odwrocTablice(int *tab, int *w_i)
{
    unsigned long long int *pom = new unsigned long long int[*w_i];
    int licznik = *w_i;
    int n = licznik-1;

    for(int j = 0; j < *w_i; j++)
    {
        pom[j] = tab[n];
        n--;
    }

    cout << "i wynosi: " << *w_i << endl;
    cout << "licznik n wynosi: " << n << endl;
    cout << "Odwrocona tablica pom[]: ";
    for(int j = *w_i-1; j >= 0; j--)
    {
        cout << pom[j] << " ";
    }
    cout << endl << "Kopiowanie tablicy tab[]: " << endl;
    for(int j = 0; j < *w_i; j++)
    {
        tab[j] = pom[j];
    }
    delete [] pom;
}

void potegowanie(unsigned long long int *p, int *w_i)
{

    unsigned long long int podstawa = 2;
    p[0] = 1;
    p[1] = 2;

    for(int j = 2; j < *w_i; j++)
    {
        podstawa *=2;
        p[j] = podstawa;
    }
}


