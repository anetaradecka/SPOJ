#include <iostream>
#include <string>

using namespace std;

void skroc(string *napis, int *ileSkrocic)
{
    int licznik = 1;

    for(int i = 1; i <= (*napis).length(); i++)
    {

        if((*napis)[i] != (*napis)[i-1])
        {
            if(licznik >= *ileSkrocic)
            {
                cout << (*napis)[i-1] << licznik;
            }

             else
             {
                 for(int j = 0; j < licznik; j++)
                 cout << (*napis)[i-1];

             }
            licznik = 0;
        }
        licznik++;
    }

}

int main()
{
    // tworzenie zmiennych
    string napis;
    cin >> napis;

    int ileSkrocic;
    cin >> ileSkrocic;

    //tworzenie wskazników do zmiennych
    string *w_napis = &napis;
    int *w_ileSkrocic = &ileSkrocic;

    skroc(w_napis, w_ileSkrocic);


    return 0;
}
