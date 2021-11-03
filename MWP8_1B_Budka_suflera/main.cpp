#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iterator>

using namespace std;

vector<string> zapiszSlowaDoWektora(string tekst)
{
    stringstream ss(tekst);
    istream_iterator<string> begin(ss);
    istream_iterator<string> end;
    vector<string> wektorWyjsciowy(begin, end);
    return wektorWyjsciowy;
}

void pokazRozniceMiedzyTekstami(vector<string> oryginalnyTekstPiosenki, vector<string> tekstKrzysztofa) {
    sort(oryginalnyTekstPiosenki.begin(), oryginalnyTekstPiosenki.end());
    sort(tekstKrzysztofa.begin(), tekstKrzysztofa.end());

    vector<string> brakujacyTekstPiosenki;
    set_difference(oryginalnyTekstPiosenki.begin(), oryginalnyTekstPiosenki.end(),
                   tekstKrzysztofa.begin(), tekstKrzysztofa.end(),
                   back_inserter(brakujacyTekstPiosenki));

    sort(brakujacyTekstPiosenki.begin(), brakujacyTekstPiosenki.end());
    int liczbaBrakujacychSlow = brakujacyTekstPiosenki.size();
    cout << liczbaBrakujacychSlow << endl;
    for(vector<string>::iterator itr = brakujacyTekstPiosenki.begin(), koniec = brakujacyTekstPiosenki.end(); itr != koniec; ++itr) {
        cout << *itr << endl;
    }
}
int main() {
    vector<string> oryginalnyTekstPiosenki, tekstKrzysztofa;
    string slowaOryginalu, slowaKrzysztofa;

    getline(cin, slowaOryginalu);
    oryginalnyTekstPiosenki = zapiszSlowaDoWektora(slowaOryginalu);

    getline(cin, slowaKrzysztofa);
    tekstKrzysztofa = zapiszSlowaDoWektora(slowaKrzysztofa);

    pokazRozniceMiedzyTekstami(oryginalnyTekstPiosenki, tekstKrzysztofa);
    return 0;
}
