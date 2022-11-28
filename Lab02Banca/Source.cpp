#include "Banca.h"
#include<iostream>
using namespace std;
int main() {

	ContBancar c1[] = { ContBancar("Cont01",100.0, "RON"), ContBancar("Cont02", 132.0, "EUR") };
	ContBancar c2[] = { ContBancar("Cont11", 350.0, "RON"), ContBancar("Cont12", 465.0, "RON") };
	Client client[] = { Client("Nume1", "Prenume1", "adresa1", 2, c1), Client("Nume2", "Prenume2", "adresa2", 2 ,c2) };
	Banca* b = new Banca("Banca", 2, client);

	//operatii
	c1[0].depunere(100);
	cout << "Suma dupa depunere: " << c1[0].getSuma() << endl;;
	c1[0].extragere(100);
	cout << "Suma dupa extragere: " << c1[0].getSuma() << endl;

	c1[0].transfer(c2[1], 100);
	cout << "Suma dupa transfer (sursa): " << c1[0].getSuma() << endl;
	cout << "Suma dupa transfer (destinatie): " << c2[1].getSuma() << endl;

	cout << "Dobanda: " << c2[0].getDobanda() << endl;
	cout << "Suma totala: " << c2[0].getSumaTotala() << endl;

	b->afisareDateBanca();

	return 0;
}