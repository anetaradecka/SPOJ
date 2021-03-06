#include <iostream>
#include <map>
#include <string>
#include <cstdlib>

using namespace std;

map <int, string > liczbySlownie = {
    { 0, "" }, { 1, " jeden" }, { 2, " dwa" }, { 3, " trzy" }, { 4, " cztery" }, { 5, " piec" },
    { 6, " szesc" }, { 7, " siedem" }, { 8, " osiem" }, { 9, " dziewiec" }, { 10, " dziesiec" },
    { 11, " jedenascie" }, { 12, " dwanascie" }, { 13, " trzynascie" }, { 14, " czternascie" }, { 15, " pietnascie" },
    { 16, " szesnascie" }, { 17, " siedemnascie" }, { 18, " osiemnascie" }, { 19, " dziewietnascie" },
    { 20, " dwadziescia" }, { 30, " trzydziesci" }, { 40, " czterdziesci" }, { 50, " piecdziesiat" },
    { 60, " szescdziesiat" }, { 70, " siedemdziesiat" }, { 80, " osiemdziesiat" }, { 90, " dziewiecdziesiat" },
    { 100, " sto" }, { 200, " dwiescie" }, { 300, " trzysta" }, { 400, " czterysta" }, { 500, " piecset" },
    { 600, " szescset" }, { 700, " siedemset" }, { 800, " osiemset" }, { 900, " dziewiecset" }
};
bool sprawdzDwieOstatnieCyfry(string liczbaDoSprawdzenia, int dlugoscLiczbyDoSprawdzenia) {
    string pom;
    if(dlugoscLiczbyDoSprawdzenia == 3) {
        pom = liczbaDoSprawdzenia.substr(1, 2);
    } else {
        pom = liczbaDoSprawdzenia.substr(0, 2);
    }
    int aktualnieRozpatrywanaLiczba = atoi(pom.c_str());
    if((aktualnieRozpatrywanaLiczba > 9) && (aktualnieRozpatrywanaLiczba < 20)) {
        return true;
    } else {
        return false;
    }
}
string zamienIntegerNaSlowo(int liczba) {
    string liczbaSlownie, jednostki, dziesiatki, setki, pom;
    string liczbaDoSprawdzenia = to_string(liczba);
    int dlugoscLiczbyDoSprawdzenia = liczbaDoSprawdzenia.length();
    int aktualnieRozpatrywanaLiczba;
    bool wynik;
    switch(dlugoscLiczbyDoSprawdzenia) {
    case 1:
        aktualnieRozpatrywanaLiczba = liczba;
        for(map<int, string>::iterator itr = liczbySlownie.begin(); itr != liczbySlownie.end(); ++itr) {
            if(aktualnieRozpatrywanaLiczba == itr->first)
                jednostki = itr->second;
        }
        liczbaSlownie = jednostki;
        break;
    case 2:
        wynik = sprawdzDwieOstatnieCyfry(liczbaDoSprawdzenia, dlugoscLiczbyDoSprawdzenia);
        if(wynik == true) {
            aktualnieRozpatrywanaLiczba = liczba;
            for(map<int, string>::iterator itr = liczbySlownie.begin(); itr != liczbySlownie.end(); ++itr) {
                if(aktualnieRozpatrywanaLiczba == itr->first)
                    dziesiatki = itr->second;
            }
            liczbaSlownie = dziesiatki;
        } else {
            aktualnieRozpatrywanaLiczba = liczba%10;
            for(map<int, string>::iterator itr = liczbySlownie.begin(); itr != liczbySlownie.end(); ++itr) {
                if(aktualnieRozpatrywanaLiczba == itr->first)
                    jednostki = itr->second;
            }
            liczba = liczba - aktualnieRozpatrywanaLiczba;
            //------------------------------------------------------//
            aktualnieRozpatrywanaLiczba = liczba%100;
            for(map<int, string>::iterator itr = liczbySlownie.begin(); itr != liczbySlownie.end(); ++itr) {
                if(aktualnieRozpatrywanaLiczba == itr->first)
                    dziesiatki = itr->second;
            }
            liczbaSlownie = dziesiatki + jednostki;
        }
        break;
    case 3:
        wynik = sprawdzDwieOstatnieCyfry(liczbaDoSprawdzenia, dlugoscLiczbyDoSprawdzenia);
        if(wynik == true) {
            pom = liczbaDoSprawdzenia.substr(1, 2);
            int aktualnieRozpatrywanaLiczba = atoi(pom.c_str());
            for(map<int, string>::iterator itr = liczbySlownie.begin(); itr != liczbySlownie.end(); ++itr) {
                if(aktualnieRozpatrywanaLiczba == itr->first)
                    dziesiatki = itr->second;
            }
            liczba = liczba - aktualnieRozpatrywanaLiczba;
            //------------------------------------------------------//
            aktualnieRozpatrywanaLiczba = liczba%1000;
            for(map<int, string>::iterator itr = liczbySlownie.begin(); itr != liczbySlownie.end(); ++itr) {
                if(aktualnieRozpatrywanaLiczba == itr->first)
                    setki = itr->second;
            }
            liczbaSlownie = setki + dziesiatki + jednostki;

        } else {
            aktualnieRozpatrywanaLiczba = liczba%10;
            for(map<int, string>::iterator itr = liczbySlownie.begin(); itr != liczbySlownie.end(); ++itr) {
                if(aktualnieRozpatrywanaLiczba == itr->first)
                    jednostki = itr->second;
            }
            liczba = liczba - aktualnieRozpatrywanaLiczba;
            //------------------------------------------------------//
            aktualnieRozpatrywanaLiczba = liczba%100;
            for(map<int, string>::iterator itr = liczbySlownie.begin(); itr != liczbySlownie.end(); ++itr) {
                if(aktualnieRozpatrywanaLiczba == itr->first)
                    dziesiatki = itr->second;
            }
            liczba = liczba - aktualnieRozpatrywanaLiczba;
            //------------------------------------------------------//
            aktualnieRozpatrywanaLiczba = liczba%1000;
            for(map<int, string>::iterator itr = liczbySlownie.begin(); itr != liczbySlownie.end(); ++itr) {
                if(aktualnieRozpatrywanaLiczba == itr->first)
                    setki = itr->second;
            }
            liczbaSlownie = setki + dziesiatki + jednostki;
        }
        break;
    }

    return liczbaSlownie;
}
int main() {
    unsigned long long int liczba, aktualnieRozpatrywanaLiczba;
    string liczbaSlownie, jednostki, setki, tysiace, miliony, miliardy, biliony;
    int liczbaTestow;
    cin >> liczbaTestow;
    while(liczbaTestow--) {
        cin >> liczba;

        if(liczba < 1000) {
            aktualnieRozpatrywanaLiczba = liczba%1000;
            setki = zamienIntegerNaSlowo(aktualnieRozpatrywanaLiczba);
            liczbaSlownie = setki;
        }
        if((liczba >= 1000) && (liczba < 1000000)) {
            aktualnieRozpatrywanaLiczba = liczba%1000;
            setki = zamienIntegerNaSlowo(aktualnieRozpatrywanaLiczba);
            //-----------------------------------------------------------------//
            liczba = liczba - aktualnieRozpatrywanaLiczba;
            aktualnieRozpatrywanaLiczba = liczba / 1000;
            tysiace = zamienIntegerNaSlowo(aktualnieRozpatrywanaLiczba);
            liczbaSlownie = tysiace + " tys." + setki;
        }
        if((liczba >= 1000000) && (liczba < 1000000000)) {
            aktualnieRozpatrywanaLiczba = liczba%1000;
            setki = zamienIntegerNaSlowo(aktualnieRozpatrywanaLiczba);
            //-----------------------------------------------------------------//
            liczba = liczba - aktualnieRozpatrywanaLiczba;
            aktualnieRozpatrywanaLiczba = liczba / 1000;
            aktualnieRozpatrywanaLiczba = aktualnieRozpatrywanaLiczba%1000;
            tysiace = zamienIntegerNaSlowo(aktualnieRozpatrywanaLiczba);
            int tysiaceLiczba = aktualnieRozpatrywanaLiczba;
            //-----------------------------------------------------------------//
            liczba = liczba - (aktualnieRozpatrywanaLiczba*1000);
            aktualnieRozpatrywanaLiczba = liczba / 1000000;
            miliony = zamienIntegerNaSlowo(aktualnieRozpatrywanaLiczba);
            if(tysiaceLiczba >= 1)
                liczbaSlownie = miliony + " mln." + tysiace + " tys." + setki;
            else if(tysiaceLiczba < 1)
                liczbaSlownie = miliony + " mln." + tysiace + setki;
        }
        if((liczba >= 1000000000) && (liczba < 1000000000000)) {
            aktualnieRozpatrywanaLiczba = liczba%1000;
            setki = zamienIntegerNaSlowo(aktualnieRozpatrywanaLiczba);
            //-----------------------------------------------------------------//
            liczba = liczba - aktualnieRozpatrywanaLiczba;
            aktualnieRozpatrywanaLiczba = liczba / 1000;
            aktualnieRozpatrywanaLiczba = aktualnieRozpatrywanaLiczba%1000;
            tysiace = zamienIntegerNaSlowo(aktualnieRozpatrywanaLiczba);
            int tysiaceLiczba = aktualnieRozpatrywanaLiczba;
            //-----------------------------------------------------------------//
            liczba = liczba - (aktualnieRozpatrywanaLiczba*1000);
            aktualnieRozpatrywanaLiczba = liczba / 1000000;
            aktualnieRozpatrywanaLiczba = aktualnieRozpatrywanaLiczba%1000;
            miliony = zamienIntegerNaSlowo(aktualnieRozpatrywanaLiczba);
            int milionyLiczba = aktualnieRozpatrywanaLiczba;
            //-----------------------------------------------------------------//
            liczba = liczba - (aktualnieRozpatrywanaLiczba*1000);
            aktualnieRozpatrywanaLiczba = liczba / 1000000000;
            miliardy = zamienIntegerNaSlowo(aktualnieRozpatrywanaLiczba);
            if((tysiaceLiczba > 1) && (milionyLiczba > 1))
                liczbaSlownie = miliardy + " mld." + miliony + " mln." + tysiace + " tys." + setki;
            else if((tysiaceLiczba < 1) && (milionyLiczba < 1))
                liczbaSlownie = miliardy + " mld." + miliony + tysiace + setki;
            else if((tysiaceLiczba > 1) && (milionyLiczba < 1))
                liczbaSlownie = miliardy + " mld." + miliony + tysiace + " tys." + setki;
            else if((tysiaceLiczba < 1) && (milionyLiczba > 1))
                liczbaSlownie = miliardy + " mld." + miliony + " mln." + tysiace + setki;
        }
        if(liczba == 1000000000000) {
            liczbaSlownie = "jeden bln.";
        }
        cout << liczbaSlownie << endl;
    }


    return 0;
}
