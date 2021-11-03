#include <iostream>
#include <string>

using namespace std;

void skroc(string &napis, int &ileSkrocic)
{
    int licznik = 1;

    for(int i = 1; i <= napis.length(); i++)
    {

        if(napis[i] != napis[i-1])
        {
            if(licznik >= ileSkrocic)
            {
                cout << napis[i-1] << licznik;
            }

             else
             {
                 for(int j = 0; j < licznik; j++)
                 cout << napis[i-1];

             }
            licznik = 0;
        }
        licznik++;
    }

}

int main()
{
    string napis;
    cin >> napis;

    int ileSkrocic;
    cin >> ileSkrocic;

    skroc(napis, ileSkrocic);


    return 0;
}
