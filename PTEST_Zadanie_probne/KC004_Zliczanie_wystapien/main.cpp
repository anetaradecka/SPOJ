#include <iostream>

using namespace std;

void wczytywanieLiczb(int* tab, int n)
{

    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
}

int zliczWystapienia(int* tab, int n, int x)
{
    int numerator = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] == x)
            numerator++;
    }
     return numerator;
}

int main()
{
    int x;

    while (cin >> x)
    {

       int length; cin >> length;

        int* tab = new int[length];
        wczytywanieLiczb(tab, length);

        cout << endl;

        cout << zliczWystapienia(tab, length, x);

    }

    return 0;
}
