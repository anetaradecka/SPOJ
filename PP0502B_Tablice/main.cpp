#include <iostream>

using namespace std;

int main()
{

    int n;
    int ileLiczb;
    int liczbaTestow;
    cin >> liczbaTestow;

    for(int j = 0; j < liczbaTestow; j++)
    {
     cin >> ileLiczb;
    int *w_tablica = new int[ileLiczb];
    int i =0;

    for(int i = 0; i < ileLiczb; i++)
    {
        cin >> n;
        w_tablica[i] = n;
    }
    cout << endl;
    //cout << "Odwrocona tablica: ";
    for(int i = ileLiczb-1; i >= 0; i--)
    {
        cout<< w_tablica[i]<<" ";
    }
    delete[] w_tablica;
    }

    return 0;
}
