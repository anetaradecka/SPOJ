#include <iostream>

using namespace std;

void obroc(int* tab, int n, int przes) {
  przes = (przes + n) % n;
  int indeks = 0, temp = tab[0];
  do {
    int poz = (indeks + przes + n) % n;
    swap(temp, tab[poz]);
    indeks = poz;
  } while (indeks != 0);
}

int main() {

    int ileTestow;
    cin >> ileTestow;

    for(int j = 0; j < ileTestow; j++)
    {
 	int n, k=-1;
	//cout << "Podaj ile elementow ma tablica:\n n = ";
	cin >> n;
	//cout << "Podaj elementy tablicy:" << endl;
	int* tab = new int[n];
	for (int i = 0; i < n; i++)
		cin >> tab[i];
	//cout << "O ile przesunac?\n k = ";

	obroc(tab, n, k);
	for (int i = 0; i < n; i++)
    {
 		cout << tab[i] << " ";

    }
 		cout <<endl;
    }

	system("pause");
	return 0;
}
