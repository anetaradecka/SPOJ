#include <iostream>

using namespace std;

int v1, v2, ile_testow;

int main()
{
    cin>>ile_testow;
    for (int i=1; i<=ile_testow; i++)
    {
        cin>>v1>>v2;
        cout<<2*v1*v2/(v1+v2)<<endl;
    }

    return 0;
}
