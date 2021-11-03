//ETI06F2 - Ciekawa wyliczanka
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int k, x = 5, y = 6;
    //cin >> k;

    for(int i = 0; i < 100; i++)
    {
        string str = to_string(i);
        string liczba;
        for(int j = 0; j < str.length(); j++)
        {
            if((str[j] == x) || (str[j] == y))
            {
                liczba = str[j];
            }

        }
        for(int j = 0; j < str.length(); j++)
        {
            cout << liczba;
        }
    }

    return 0;
}
