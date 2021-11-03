// JLITOSL - Liczba na słowo.cpp

#include <iostream>
#include <windows.h>

using namespace std;

void cyfry(int cyfra)
{

    switch (cyfra)
    {
    case 1:
        cout << "jeden";
        break;
    case 2:
        cout << "dwa";
        break;
    case 3:
        cout << "trzy";
        break;
    case 4:
        cout << "cztery";
        break;
    case 5:
        cout << "piec";
        break;
    case 6:
        cout << "szesc";
        break;
    case 7:
        cout << "siedem";
        break;
    case 8:
        cout << "osiem";
        break;
    case 9:
        cout << "dziewiec";
        break;
    default:
        break;
    }
}

void doSto(int liczba)
{
    string str = to_string(liczba);
    string pierwszaCyfra = str.substr(0, 1);
    int pierwsza_cyfra = stoi(pierwszaCyfra);
    string drugaCyfra = str.substr(1, 1);
    int druga_cyfra = stoi(drugaCyfra);

    switch (liczba)
    {
    case 20:
        cout << "dwadziescia";
        break;
    case 30:
        cout << "trzydziesci";
        break;
    case 40:
        cout << "czterdziesci";
        break;
    }

    if ((pierwsza_cyfra >= 2) && (pierwsza_cyfra <= 4) && (druga_cyfra != 0))
    {
        switch (pierwsza_cyfra)
        {
        case 2:
            cout << "dwadziescia";
            cyfry(druga_cyfra);
            break;
        case 3:
            cout << "trzydziesci";
            cyfry(druga_cyfra);
            break;
        case 4:
            cout << "czterdziesci";
            cyfry(druga_cyfra);
            break;
        }
    }

    if ((pierwsza_cyfra >= 5) && (pierwsza_cyfra <= 9))
    {
        if (druga_cyfra != 0)
        {
            cyfry(pierwsza_cyfra);
            cout << "dziesiat";
            cyfry(druga_cyfra);
        }
        else
        {
            cyfry(pierwsza_cyfra);
            cout << "dziesiat";
        }

    }
}

void doDwadziescia(int liczba)
{
    string str = to_string(liczba);
    string pierwszaCyfra = str.substr(0, 1);
    int pierwsza_cyfra = stoi(pierwszaCyfra);

    if (pierwsza_cyfra == 1)
    {
        if (liczba == 10)
            cout << "dziesiec";
        else if (liczba == 11)
            cout << "jedenascie";
        else if (liczba == 14)
            cout << "czternascie";
        else if (liczba == 15)
            cout << "pietnascie";
        else if (liczba == 16)
            cout << "szesnascie";
        else if (liczba == 19)
            cout << "dziewietnascie";
        else
        {
            string drugaCyfra = str.substr(1, 1);
            int druga_cyfra = stoi(drugaCyfra);
            cyfry(druga_cyfra);
            cout << "nascie";
        }
    }
    else
        doSto(liczba);

}

void doTysiac(int liczba)
{
    string str = to_string(liczba);

    string pierwszaCyfra = str.substr(0, 1);
    int pierwsza_cyfra = stoi(pierwszaCyfra);

    string drugaCyfra = str.substr(1, 1);
    int pierwsza_cyfra = stoi(drugaCyfra);

    string trzeciaCyfra = str.substr(2, 1);
    int trzecia_cyfra = stoi(trzeciaCyfra);

    if (liczba == 100)
        cout << "sto";
    else if (liczba == 200)
        cout << "dwiescie";
    else if (liczba == 300)
        cout << "trzysta";
    else if (liczba == 400)
        cout << "czterysta";
    else
    {
        cyfry(pierwsza_cyfra);
        cout << "set";
    }

    if ((pierwsza_cyfra >= 1) && (pierwsza_cyfra <= 4) && (druga_cyfra != 0) || (trzecia_cyfra != 0))
    {
        if (pierwsza_cyfra == 1)
            cout << "sto";
        else if (pierwsza_cyfra == 2)
            cout << "dwiescie";
        else if (pierwsza_cyfra == 3)
            cout << "trzysta";
        else if (pierwsza_cyfra == 4)
            cout << "czterysta";
        dodwadziescia() // Teraz należaloby tutaj z drugiej i trzeciec cyfry zrobić jedną liczbę
    }
}

int sprawdzWielkosc(int x)
{
    string str = to_string(x);
    int dlugosc = str.length();

    return dlugosc;
}

int main()
{

    int x;
    while (cin >> x)
    {
        cout << "Wpisz liczbe: \n";

        sprawdzWielkosc(x);

        switch (sprawdzWielkosc(x))
        {
        case 1:
            cyfry(x);
            break;
        case 2:
            doDwadziescia(x);
            break;
        case 3:
            doTysiac(x);
            break;
        }
    }


    return 0;
}