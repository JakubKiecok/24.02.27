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
	void prezemtacjaSamochdu() {
		cout << "Marka: " << this->marka << '\n';
		cout << "Kolor: " << this->kolor << '\n';
		cout << "Pojemnosc: " << this->pojemnosc << '\n';
		cout << "Cena: " << this->cena << '\n';
		cout << "Przebieg: " << this->przebieg << '\n';
		cout << "----------------------------------------" << endl;
	}
};

int main()
{
	Samochody fiat = Samochody("FIAT", "Zielony", 2.0, 123456, 987);
	fiat.prezemtacjaSamochdu();

	Samochody volvo = Samochody("Volvo", "Szary", 1.6, 3256, 100);
	volvo.prezemtacjaSamochdu();

	Samochody renault = Samochody("Renault", "Zloty", 3.0, 7841, 523);
	renault.prezemtacjaSamochdu();

	return EXIT_SUCCESS;
}