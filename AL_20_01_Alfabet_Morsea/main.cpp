#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    map<char, string> alfabetMorsea;
    alfabetMorsea['A'] = ".-/";
    alfabetMorsea['B'] = "-.../";
    alfabetMorsea['C'] = "-.-./";
    alfabetMorsea['D'] = "-../";
    alfabetMorsea['E'] = "./";
    alfabetMorsea['F'] = ".-../";
    alfabetMorsea['G'] = "--./";
    alfabetMorsea['H'] = "..../";
    alfabetMorsea['I'] = "../";
    alfabetMorsea['J'] = ".---/";
    alfabetMorsea['K'] = "-.-/";
    alfabetMorsea['L'] = "..-./";
    alfabetMorsea['M'] = "--/";
    alfabetMorsea['N'] = "-./";
    alfabetMorsea['O'] = "---/";
    alfabetMorsea['P'] = ".--./";
    alfabetMorsea['Q'] = "--.-/";
    alfabetMorsea['R'] = ".-./";
    alfabetMorsea['S'] = ".../";
    alfabetMorsea['T'] = "-/";
    alfabetMorsea['U'] = "..-/";
    alfabetMorsea['V'] = "...-/";
    alfabetMorsea['W'] = ".--/";
    alfabetMorsea['X'] = "-..-/";
    alfabetMorsea['Y'] = "-.--/";
    alfabetMorsea['Z'] = "--../";
    alfabetMorsea[' '] = "/";

    string tekst;
    cin >> tekst;

    while (getline(cin, tekst)) {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::toupper);
        for (int i = 0; i < tekst.length(); i++)  {
            map <char, string> :: iterator itr = alfabetMorsea.find(tekst[i]);

            if (itr!= alfabetMorsea.end()) {
                cout << itr->second;
            }
        }
        cout << "\n";
    }
    return 0;
}
