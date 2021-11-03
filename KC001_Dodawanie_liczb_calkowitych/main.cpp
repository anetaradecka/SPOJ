#include <iostream>
#include <cstdlib>

using namespace std;

int a, b, c;//Zmienne globalne

int sumowanie()
{
    int suma=0;//Zmienna lokalna na potrzeby funkcji sumowanie
    return suma=a+b+c;
}

int main()
{
    cin>>a;
    cin>>b;
    cin>>c;

    if(a < 100 &&  b < 100 && c < 100)
    {
        cout<<sumowanie();
    }   else exit(0);

    return 0;
}
