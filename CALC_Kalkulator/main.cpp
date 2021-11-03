#include <iostream>

using namespace std;

int main()
{
    char symbol;
    int wynik, x, y;

    while(cin >> symbol >> x >> y)
    {
        switch(symbol)
        {
        case '+':
            wynik=x + y;
            break;
        case '-':
            wynik=x - y;
            break;
        case '*':
            wynik=x * y;
            break;
        case '/':
            wynik=x / y;
            break;
        case '%':
            wynik=x%y;
            break;
        }
        cout<<wynik<<endl;
    }

    return 0;
}
