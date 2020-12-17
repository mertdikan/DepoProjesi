#include "depocikisislemi.h"

#include <iostream>
#include <string>

#include "Veri/depocikisverisi.h"

using namespace std;

DepoCikisIslemi::DepoCikisIslemi(IslemDeposu &d) : depo(d) {}

void DepoCikisIslemi::cik()
{
    string urunNo;
    double urunAdeti;
    string tarih;

    cout << "Urun Numarasi      : ";
    cin >> urunNo;

    double stok = depo.stok(urunNo);

    cout << "STOK DURUMUNUZ " << stok << endl;
    cout << "CIKACAK URUN      : ";
    cin >> urunAdeti;
    while(urunAdeti>stok) {
        cerr << "STOK DURUMUNUZ YETERSIZ....!"<<endl;
        cout << "CIKACAK URUN      :";
        cin >> urunAdeti;
        if(urunAdeti<0)
            return;
    }
    cout << "Tarih               : ";
    cin >> tarih;

    DepoGirisVerisi dgv(tarih, urunAdeti, urunNo);
    depo.depoGir(dgv);
}
