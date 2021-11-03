#include <iostream>
#include <cstdlib>


using namespace std;

bool czy_pierwsza(int n)
{
	if(n<2)
	  return false;

	for(int i=2;i*i<=n;i++)
       if(n%i==0)
            return false;

	return true;
}

int main()
{
    int n;
    int ileTestow;
    cin >> ileTestow;

    for(int i = 0; i < ileTestow; i++)
    {
    cin >> n;
     if(czy_pierwsza(n))
		cout<<"TAK "<<endl;
	else
		cout<<"NIE"<<endl;
    }

    return 0;
}
