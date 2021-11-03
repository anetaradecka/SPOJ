#include <iostream>
#include <string>


using namespace std;

int main()
{
    string wyraz;
    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++)
        {
    cin>>wyraz;
    int dlugosc = wyraz.length();

    for(int i=0; i<dlugosc/2; i++)
    {
         cout<<wyraz[i];
    }
        cout<<"\n";
    }

    return 0;
}
