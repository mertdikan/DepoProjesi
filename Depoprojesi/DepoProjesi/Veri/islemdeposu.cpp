#include "islemdeposu.h"

IslemDeposu::IslemDeposu() {}

void IslemDeposu::depoGir(DepoGirisVerisi &veri) {
    depoGirisVerileri.push_back(veri);
}

void IslemDeposu::depoCik(DepoCikisVerisi &veri) {
    depoCikisVerileri.push_back(veri);
}

double IslemDeposu::DepoyaGirenUrun(string depo) {
    double sonuc = 0;
    for(auto veri : depoGirisVerileri) {
        if(veri.getUrunNo() == depo) {
        sonuc += veri.getUrunAdeti();
      }
    }
    return sonuc;
}

double IslemDeposu::DepodanCikanUrun(string depo)
{
    double sonuc = 0;
    for(auto veri : depoCikisVerileri) {
        if(veri.getUrunNo() == depo) {
        sonuc += veri.getUrunAdeti();
      }
    }
    return sonuc;
}

double IslemDeposu::stok(string depo)
{
    return DepoyaGirenUrun(depo) - DepodanCikanUrun(depo);
}
