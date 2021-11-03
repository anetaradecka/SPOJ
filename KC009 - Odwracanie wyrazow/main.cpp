#include <iostream>

using namespace std;

int main()
{
    string wyraz;
    while(cin >> wyraz)
    {
    for(int i=0; i<wyraz.length(); i++)
    {
        cout<<wyraz[wyraz.length()-(i+1)];
    }
    cout << endl;
    }

    return 0;
}
