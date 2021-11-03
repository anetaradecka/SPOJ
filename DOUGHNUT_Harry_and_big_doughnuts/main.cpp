#include <iostream>


using namespace std;

int pomnoz(int c, int w)
{
    return c*w;
}

bool czyUdzwignie(int pomnoz, int k)
{
      if(pomnoz >= k)
      {
        cout<<"no";
      }
      else cout<<"yes";

}

int main()
{
int testy;
cin>>testy;
for(int i = 0; i<testy; i++)
{
int c, w, k;
cin>>c>>w>>k;
int wagaPaczkow = pomnoz(c, w);
int wynik = czyUdzwignie(wagaPaczkow, k);
}
return 0;
}
