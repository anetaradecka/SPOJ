#include <iostream>

using namespace std;

int n, k;
int suma=0;

int sumowanie()
{
    suma=suma+(n*k);
    return suma;
}

int main()
{
    for (int i=1; i<=2; i++) //1 pętla dla klasy ekonomicznej i 1 dla klasy biznesowej
    {
    cin>>n>>k;
    cout<<sumowanie();
    }

    return (0);
}
