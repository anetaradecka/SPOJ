#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> wagaPrawidlowa;
vector<string> nadwaga;
vector<string> niedowaga;

void obliczBMI(string imie, float waga, float wzrost) {

    wzrost = wzrost / 100;
    float wynikBMI = waga / (wzrost * wzrost);
    if (wynikBMI < 18.5) {
        niedowaga.push_back(imie);
    }
    if (wynikBMI >= 18.5 && wynikBMI < 25) {
        wagaPrawidlowa.push_back(imie);
    }
    if (wynikBMI > 25) {
        nadwaga.push_back(imie);
    }
}

int main() {
    int LICZBA_BADANYCH_OSOB;
    cin >> LICZBA_BADANYCH_OSOB;
    for(int i = 0; i < LICZBA_BADANYCH_OSOB; i++) {
        string imie;
        float waga, wzrost;
        cin >> imie;
        cin >> waga;
        cin >> wzrost;
        obliczBMI(imie, waga, wzrost);
    }
    cout << "niedowaga" << endl;
    for(int i = 0; i < niedowaga.size(); i++)
    {
        cout << niedowaga[i] << endl;
    }
        cout << "wartosc prawidlowa" << endl;
    for(int i = 0; i < wagaPrawidlowa.size(); i++)
    {
        cout << wagaPrawidlowa[i] << endl;
    }
        cout << "nadwaga: " << endl;
    for(int i = 0; i < nadwaga.size(); i++)
    {
        cout << nadwaga[i] << endl;
    }

    return 0;
}
