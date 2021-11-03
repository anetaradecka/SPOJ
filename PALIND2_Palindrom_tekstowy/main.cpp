#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


void palindrom(string kopia, string tekst);
string kopiowanie(string tekst, string kopia);
bool sprawdzTekst(string tekst);

int main()
{
    int ileTestow;
    cin >> ileTestow;
    while(ileTestow--)
    {
        string tekst;
        // cout << "Wpisz tekst do sprawdzenia: ";
        cin >> tekst;
        bool wynik = sprawdzTekst(tekst);
        if(wynik = true)
        {
            string kopia;
            kopia = kopiowanie(tekst, kopia);
            //  cout << kopia <<endl;

            reverse(kopia.begin(),kopia.end());
            // cout << kopia << endl;

            palindrom(kopia, tekst);
        }
        else
            exit(0);
    }
    return 0;
}
bool sprawdzTekst(string tekst)
{
    bool wynik;
    int licznik = 0;
    int dlugosc = tekst.length();
    if(dlugosc < 101)
    {
        for(int i = 0; i < tekst.length(); i++)
        {
            if((tekst[i] > 96) && (tekst[i] < 123))
                licznik++;
        }
        if(licznik == tekst.length())
            wynik = true;
        else
            wynik = false;
    }
    else
        exit(0);

    return wynik;
}

void palindrom(string kopia, string tekst)
{
    int licznik = 0;
    for(int i =0; i < tekst.length(); i++)
    {
        if(kopia[i] == tekst[i])
            licznik++;
    }
    if(licznik == tekst.length())
        cout << "tak" << endl;
    else
        cout << "nie" << endl;
}

string kopiowanie(string tekst, string kopia)
{
    for(int i = 0; i < tekst.length(); i++)
        kopia += tekst[i];

    return kopia;
}
