#include <iostream>

using namespace std;

int najwiekszaLiczba;
int x;
int y;
int ileTestow;

int main()
{
    cin>>ileTestow;


    for(int i=1; i<=ileTestow; i++)
    {
    cin>>najwiekszaLiczba;
    cin>>x>>y;
       for(int i=0; i<najwiekszaLiczba; i++)
    {
     if(i%x==0 && i%y!=0)
        {
        cout<<i<<" ";
        }
    }
    cout<<"\n";
    }



   return 0;
}
