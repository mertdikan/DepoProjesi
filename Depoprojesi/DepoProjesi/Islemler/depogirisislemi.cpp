#include "depogirisislemi.h"

#include <string>
#include <iostream>

#include "Veri/depocikisverisi.h"

using namespace std;

DepoGirisIslemi::DepoGirisIslemi(IslemDeposu &d) : depo(d) {}

void DepoGirisIslemi::gir() {
    string urunNo;
    double urunAdeti;
    string tarih;

    cout << "Urun Numarasi      : ";
    cin >> urunNo;
    cout << "Girilecek Adet     : ";
    cin >> urunAdeti;
    cout << "Tarih              : ";
    cin >> tarih;

    DepoGirisVerisi dgv(tarih, urunAdeti, urunNo);
    depo.depoGir(dgv);
}

