#include <iostream>

using namespace std;

int main()
{
    int ileTestow;
    cin >> ileTestow;
    for(int j = 0; j < ileTestow; j++)
    {
        int n;
        cin >> n;
        int *tab = new int[n];

        for(int i = 0; i < n; i++)
        {
            cin >> tab[i];
        }

        for(int i = 1; i < n; i=i+2)
        {
            cout << tab[i] <<" ";
        }
        for(int i = 0; i < n; i=i+2)
        {
            cout << tab[i] <<" ";
        }
        cout << endl;
        delete [] tab;
    }


    return 0;
}
