
#include <iostream>
#include<cstdlib>
#include<windows.h>

using namespace std;

void wypelnijTablice(int **tab);
void skopiujTablice(int **pom, int **tab);
bool sprawdzTabliceWPoziomie(int **tab, int **pom);
bool sprawdzTabliceWPionie(int **tab, int **pom);
bool sprawdzTabliceWPojedynczymKwadracie(int **tab, int **pom);

int main()
{
    int ileTestow;
    cin >> ileTestow;
    while(ileTestow--)
    {
        int **tab;
        tab = new int*[9];
        int i;
        for (int i=0; i<9; i++)
            tab[i] = new int[9];

        int **pom;
        pom = new int*[9];
        for (int i=0; i<9; i++)
            pom[i] = new int[9];

        wypelnijTablice(tab);
        skopiujTablice(pom, tab);

        /*  cout << "Tablica tab: " << endl;
          for(int w=0; w<9; w++)
          {
              for(int k=0; k<9; k++)
              {
                  cout << tab[w][k] << " ";
              }
              cout << endl;
          }

          cout << "Tablica pom: " << endl;

          for(int w=0; w<9; w++)
          {
              for(int k=0; k<9; k++)
              {
                  cout << pom[w][k] << " ";
              }
              cout << endl;
          }*/

        int wynik = sprawdzTabliceWPoziomie(tab, pom);

        if(wynik == true)
            wynik = sprawdzTabliceWPionie(tab, pom);

        if (wynik == true)
            wynik = sprawdzTabliceWPojedynczymKwadracie(tab, pom);

        if(wynik == true)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;

        delete [] tab;
        delete [] pom;
    }

    return 0;
}

void wypelnijTablice(int **tab)
{
    int w, k; // wiersz, kolumna

    for(int w=0; w<9; w++)
    {
        for(int k=0; k<9; k++)
        {
            cin >> tab[w][k];
        }
    }
}

void skopiujTablice(int **pom, int **tab)
{
    int w, k; // wiersz, kolumna

    for(int w=0; w<9; w++)
    {
        for(int k=0; k<9; k++)
        {
            pom[w][k] = tab[w][k];
        }
    }
}

bool sprawdzTabliceWPoziomie(int **tab, int **pom)
{
    int w, k, i, j, aktualnaCyfra;
    int licznik=0;

    for(w=0, i=0; w<9, i<9; w++, i++)
    {
        for(j = 0; j<9; j++)
        {
            aktualnaCyfra = pom[i][j];
            for(k=0; k<9; k++)
            {
                if((tab[w][k] >=1) && (tab[w][k] <=9))
                {
                    if(aktualnaCyfra == tab[w][k])
                        licznik +=1;
                }
            }
        }
    }
    //cout << licznik;
    //system("pause");

    if(licznik == 81)
        return true;
    else
        return false;
}

bool sprawdzTabliceWPionie(int **tab, int **pom)
{
    int w, k, i, j, aktualnaCyfra;
    int licznik=0;

    for(k=0, i=0; k<9, i<9; k++, i++)
    {
        for(j = 0; j<9; j++)
        {
            aktualnaCyfra = pom[j][i];
            for(w=0; w<9; w++)
            {
                if((tab[w][k] >=1) && (tab[w][k] <=9))
                {
                    if(aktualnaCyfra == tab[w][k])
                        licznik +=1;
                }
            }
        }
    }
    //cout << licznik;
    //system("pause");

    if(licznik == 81)
        return true;
    else
        return false;
}

bool sprawdzTabliceWPojedynczymKwadracie(int **tab, int **pom)
{
    /* k - kolumna, w - wiersz;
    i, j - odpowiedniki w i k w skopiowanej tablicy służące do wyznaczenia aktualnie sprawdzanej liczby
    x, y, a, b - zmienne pomocnicze pomagają ustalić limit do kiedy dana petla ma się wykonywać*/

    int w, k, i, j, x, y, a, b, c, d, aktualnaCyfra;
    int licznik=0;
    int suma=0;

    for(w=0; w<9; w=w+3)
    {
        for(k=0; k<9; k=k+3)
        {
            for(j=0, d=j+3; j<d; j++)
            {
                for(i=0, c=i+3; i<c; i++)
                {
                    for(y=w, b=y+3; y<b; y++)
                    {
                        aktualnaCyfra = tab[i][j];
                        for(x=k, a=x+3; x<a; x++)
                        {
                            if((tab[x][y] >=1) && (tab[x][y] <=9))
                            {
                                if(aktualnaCyfra == tab[x][y])
                                {
                                    licznik+=1;
                                    suma=suma+tab[x][y];
                                }

                            }
                        }
                    }
                }
            }
        }
    }

   // cout << licznik;
   // system("pause");

    if((licznik == 81)&&(suma ==405))
        return true;
    else
        return false;
}
