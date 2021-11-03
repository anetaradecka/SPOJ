#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<char, string> systemSzesnastkowy;
    systemSzesnastkowy['0'] = "0000";
    systemSzesnastkowy['1'] = "0001";
    systemSzesnastkowy['2'] = "0010";
    systemSzesnastkowy['3'] = "0011";
    systemSzesnastkowy['4'] = "0100";
    systemSzesnastkowy['5'] = "0101";
    systemSzesnastkowy['6'] = "0110";
    systemSzesnastkowy['7'] = "0111";
    systemSzesnastkowy['8'] = "1000";
    systemSzesnastkowy['9'] = "1001";
    systemSzesnastkowy['A'] = "1010";
    systemSzesnastkowy['B'] = "1011";
    systemSzesnastkowy['C'] = "1100";
    systemSzesnastkowy['D'] = "1101";
    systemSzesnastkowy['E'] = "1110";
    systemSzesnastkowy['F'] = "1111";

    char liczbaWSystemieSzesnastkowym;
    cin >> liczbaWSystemieSzesnastkowym;
    map <char, string>::iterator itr = systemSzesnastkowy.find(liczbaWSystemieSzesnastkowym);

    if (itr!= systemSzesnastkowy.end()) {
        cout << itr->second;
    }

    return 0;
}
