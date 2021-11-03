#include <iostream>

using namespace std;

void zapiszCzasyJedzenieCiastkaDlaPoszczegolnychUczestnikow(int *tabTime, int participiants);
int obliczLiczbeWszystkichCiastek(int *tabTime, int participiants, int totalCookies);
int obliczLiczbePotrzebnychPudelek(int totalCookies, int cookiesInOneBox);

int main()
{
    int ileTestow; cin >> ileTestow;

    while(ileTestow--)
    {
    int participiants, cookiesInOneBox;
    int totalCookies;

    //cout << "Podaj liczbe uczestnikow: ";
    cin >> participiants;
    cout << endl;
    //cout << "Podaj liczbe ciastek w jednym pudelku: ";
    cin >> cookiesInOneBox;
    cout << endl;

    int *tabTime = new int[participiants];
    zapiszCzasyJedzenieCiastkaDlaPoszczegolnychUczestnikow(tabTime, participiants);
    cout << endl;

    totalCookies = obliczLiczbeWszystkichCiastek(tabTime, participiants, totalCookies);
    int boxes = obliczLiczbePotrzebnychPudelek(totalCookies, cookiesInOneBox);
    cout << boxes;

    delete [] tabTime;
    }

    return 0;
}

void zapiszCzasyJedzenieCiastkaDlaPoszczegolnychUczestnikow(int *tabTime, int participiants)
{
   // cout << "Podaj kolejno czasy jedzenia jednego ciastka dla poszczegolnych uczestnikow: " << endl;
    for(int i = 0; i < participiants; i++)
        cin >> tabTime[i];

    //for(int i = 0; i < participiants; i++)
    //    cout << tabTime[i];
}

int obliczLiczbeWszystkichCiastek(int *tabTime, int participiants, int totalCookies)
{
    int totalTime = 86400;
    totalCookies = 0;
    for(int i = 0; i < participiants; i++)
    {
        totalCookies += (totalTime/tabTime[i]);
    }

    return totalCookies;
}

int obliczLiczbePotrzebnychPudelek(int totalCookies, int cookiesInOneBox)
{
   int boxes = 0;
   boxes = totalCookies/cookiesInOneBox;

    if(totalCookies%cookiesInOneBox != 0)
        return boxes + 1;

               if(totalCookies%cookiesInOneBox == 0)
                   return boxes;
}










