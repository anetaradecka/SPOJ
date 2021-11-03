#include <iostream>
#include <cstdlib>

using namespace std;

int algorytmEuklidesa(int a, int b); //prototyp

int main()
{
    int ileTestow;
    cin>>ileTestow;

    for(int i=1; i<=ileTestow; i++)
    {
        cout<<algorytmEuklidesa(15, 12); //Czy do wywołania funkcji muszę podawać randomowe liczby? (patrz str. 87)
    }
}

int algorytmEuklidesa(int a, int b)
{
    cin >> a >>b;

    int iloczyn = a * b;

    while(a != b)
    {
        if(a > b) {
           a = a - b;
        } else {
            b = b - a;
        }
    }


    cout<< iloczyn/a << endl;


    return iloczyn/a;
}
