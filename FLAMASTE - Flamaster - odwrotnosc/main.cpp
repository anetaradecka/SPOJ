#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis, liczba;
    cin >> napis;

    for(int i = 1; i <= napis.length(); i++)
    {

        if(napis[i] == napis[i-1])
        {
            cout << napis[i-1] << napis[i];
            i++;
        }
        else if((napis[i] > 47 && napis[i] < 58))
        {
            string cyfra;
            char litera = napis[i-1];

            do{
            cyfra = napis.substr(i, 1);
            liczba = liczba + cyfra;
            i++;
            }while((napis[i] > 47 && napis[i] < 58));

            int x = std::stoi(liczba);
            //cout << x;

            for(int j = 0; j < x; j++)
                cout << litera;

            liczba.erase(0, liczba.length());
        }
        else
        {
            cout << napis[i-1];
        }
    }

    return 0;
}

