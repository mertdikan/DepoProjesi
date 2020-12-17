#include "menu.h"

#include "depohareketleriislemi.h"
#include "depocikisislemi.h"
#include "depogirisislemi.h"

#include <iostream>

Menu::Menu() {}

void Menu::calistir() {
    while(true) {
    int secim;
    cout << "HOS GELDINIZ" << endl
         << "BIR ISLEM SECINIZ"<<endl
         << "[1] DEPO CIKIS ISLEMI"<<endl
         << "[2] DEPO GIRIS ISLEMI" <<endl
         << "[3] DEPO HAREKETLERI" <<endl
         << "[4] CIKIS"<<endl
         <<" SECIMINIZ :";
    cin>>secim;
    if(secim==1) {
        DepoCikisIslemi islem(depo);
        islem.cik();
    } else if (secim==2) {
        DepoGirisIslemi islem(depo);
        islem.gir();
        }  else if(secim==3) {
            cout << "HENUZ HAZIR DEGIL !"<<endl;
        } else {
            break;
          }
       }
}
