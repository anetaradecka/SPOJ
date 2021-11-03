#include <iostream>


using namespace std;

int main()
{
    string tekst;
    while(getline(cin, tekst))
    {
        for(int i= 0; i < tekst.length(); i++)
        {
            if(tekst[i] > 87)
            {
                if(tekst[i] == 'X')
                    tekst[i] = 'A';
                if(tekst[i] == 'Y')
                    tekst[i] = 'B';
                if(tekst[i] == 'Z')
                    tekst[i] = 'C';
            }
            else if(tekst[i] > 64)
            {
                tekst[i] = tekst[i]+3;
            }
        }
        for(int i = 0; i < tekst.length(); i++)
        {
            cout << tekst[i];
        }

        cout <<endl;
    }

    return 0;
}

