#include <iostream>
#include <map>

using namespace std;

int romanToInt(string s) {

    map<char, int> m = {{'I', 1}, {'V', 5},{'X', 10},{'L', 50},
        {'C', 100},{'D', 500},{'M', 1000}
    };

    int total = 0;
    for(int i = 0; i < s.length(); i++) {
        if(m[s[i+1]] <= m[s[i]])  total += m[s[i]];
        else  total -= m[s[i]];
    }
    return total;
}
string intToRoman(int liczbaArabska){
    string liczbaRzymska;
    map<int, string> systemRzymski;
    systemRzymski[1000] = "M";
    systemRzymski[900] = "CM";
    systemRzymski[500] = "D";
    systemRzymski[400] = "CD";
    systemRzymski[100] = "C";
    systemRzymski[90] = "XC";
    systemRzymski[50] = "L";
    systemRzymski[40] = "XL";
    systemRzymski[10] = "X";
    systemRzymski[9] = "IX";
    systemRzymski[5] = "V";
    systemRzymski[4] = "IV";
    systemRzymski[1] = "I";

    map<int, string>::reverse_iterator itr = systemRzymski.rbegin();
    while(liczbaArabska != 0){
        if(liczbaArabska >= itr->first)
        {
            liczbaRzymska += itr->second;
            liczbaArabska -= itr->first;
        }
        else{
            ++itr;
        }
    }

    return liczbaRzymska;
}

int main() {

    string liczbaRzymska_1, liczbaRzymska_2, wynik;
    int liczbaArabska_1, liczbaArabska_2, sumaLiczbArabskich;

    while(cin >> liczbaRzymska_1 >> liczbaRzymska_2) {
        liczbaArabska_1 = romanToInt(liczbaRzymska_1);
        liczbaArabska_2 = romanToInt(liczbaRzymska_2);
        sumaLiczbArabskich = liczbaArabska_1 + liczbaArabska_2;
        wynik = intToRoman(sumaLiczbArabskich);
        cout << wynik;
    }

    return 0;
}
