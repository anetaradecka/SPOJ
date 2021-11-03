#include <iostream>

using namespace std;

int main()
{
    string pesel="94080412949";
    int peselTablica[11];

    for (int i=0; i<11; i++)
    {
        peselTablica[i]=pesel[i]-48;
    }
    for (int i=0; i<11; i++)
    {
        cout<<peselTablica[i];
    }


    return 0;
}
