#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void wyswietl (vector <string> imionaDoPosortowania) {
    for (int i=0; i<imionaDoPosortowania.size(); i++) {
        cout << imionaDoPosortowania[i] << endl;
    }
}

int main() {
    vector<string> imionaDoPosortowania;
    string imie;

    while(getline(cin, imie)) {
        imionaDoPosortowania.push_back(imie);
    }

    sort(imionaDoPosortowania.begin(), imionaDoPosortowania.end());
    wyswietl(imionaDoPosortowania);

    return 0;
}
