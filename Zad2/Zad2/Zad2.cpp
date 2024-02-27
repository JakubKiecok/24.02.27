#include <iostream>
using namespace std;

class Samochody
{
private:
	string marka;
	string kolor;
	int pojemnosc;
	int przebieg;
	float cena;
public:
	Samochody(string m, string k, float poj, int przeb, float c) {
		this->marka = m;
		this->kolor = k;
		this->pojemnosc = poj;
		this->cena = c;
		this->przebieg = przeb;
	};
	Samochody(string m, string k) {
		this->marka = m;
		this->kolor = k;
		this->prezemtacjaSamochdu2();
	};
	void prezemtacjaSamochdu() {
		cout << "Marka: " << this->marka << '\n';
		cout << "Kolor: " << this->kolor << '\n';
		cout << "Pojemnosc: " << this->pojemnosc << '\n';
		cout << "Cena: " << this->cena << '\n';
		cout << "Przebieg: " << this->przebieg << '\n';
		cout << "----------------------------------------" << endl;
	}
	void prezemtacjaSamochdu2() {
		cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
		cout << "Marka: " << this->marka << '\n';
		cout << "Kolor: " << this->kolor << '\n';
		cout << "----------------------------------------" << endl;
	}
};

int main()
{
	//Samochody fiat = Samochody("FIAT", "Zielony", 2.0, 123456, 987);
	//fiat.prezemtacjaSamochdu();
	string marka[3] = {"Fiat", "Volvo", "Bmw"};
	string kolor[3] = {"Green", "Red", "Black"};
	int pojemnosc[3] = {1.2, 2.7, 4.1};
	int przebieg[3] = {123, 891, 23};
	float cena[3] = {1326, 744, 2520};

	for (int i = 0; i < 3; i++)
	{
		Samochody sam = Samochody(marka[i], kolor[i], pojemnosc[i], przebieg[i], cena[i]);
		sam.prezemtacjaSamochdu();
	}
	for (int i = 0; i < 3; i++)
	{
		Samochody samochod = Samochody(marka[i], kolor[i]);
	}

	return EXIT_SUCCESS;
}