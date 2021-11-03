#include <iostream>

using namespace std;

int main()
{
    int pierwszaLitera[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int drugaLitera[] = {0, 16, 32, 48, 64, 80, 96, 112, 128, 144, 160, 176, 192, 208, 224, 240};
    string tekst;
    string alfabet = "ABCDEFGHIJKLMNOP";
    int pierwszaLiczba, drugaLiczba, suma;

    while(cin >> tekst)
    {
        for(int i = 0; i < 20; i = i+2)
        {
            int x = 0;
            while(x <= 15)
            {
                if(tekst[i] == alfabet[x])
                {
                    pierwszaLiczba = pierwszaLitera[x];
                    break;
                }
                x++;
            }

            int y = 0;
            while(y <=15)
            {
                if(tekst[i+1] == alfabet[y])
                {
                    drugaLiczba = drugaLitera[y];
                    break;
                }
                y++;
            }
            suma = pierwszaLiczba+drugaLiczba;
            cout << (char)suma;//rzutowanie liczby na znak
        }
        cout << endl;

    }

    return 0;
}


