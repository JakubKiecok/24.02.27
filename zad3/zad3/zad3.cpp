#include <iostream>
#include <math.h>
using namespace std;

class Ksztalt
{
private:
    const float PI = 3.1415;
    int wysokosc;
    int BokA;
    int BokB;
    int promien;
    int przekatnaE, przekatnaF;
public:
    Ksztalt(int a, int b, int h, int r, int e, int f) {
        this->wysokosc = h;
        this->BokA = a;
        this->BokB = b;
        this->promien = r;
        this->przekatnaE = e;
        this->przekatnaF = f;
    };
    void kolo() {
        cout << "Pole koła: ";
        cout << this->PI * pow(this->promien, 2) << endl;
    }
    void kwadrat() {
        cout << "Pole kwadratu: ";
        cout << pow(this->BokA, 2) << endl;
    }
    void trojkot() {
        cout << "Pole trójkąta: ";
        cout << (this->BokB * this->wysokosc) / 2 << endl;
    }
    void romb() {
        cout << "Pole rąbu: ";
        cout << (this->przekatnaE * this->przekatnaF) / 2 << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "");
    int a, b, h, r, e, f;
    cout << "Podaj bok a: "; cin >> a;
    cout << "Podaj bok b: "; cin >> b;
    cout << "Podaj wysokosc: "; cin >> h;
    cout << "Podaj promien: "; cin >> r;
    cout << "Podaj prekatna e: "; cin >> e;
    cout << "Podaj prekatna f: "; cin >> f; cout << endl;
    Ksztalt nr1(a, b, h, r, e, f);
    nr1.kolo();
    nr1.kwadrat();
    nr1.trojkot();
    nr1.romb();

    return EXIT_SUCCESS;
}