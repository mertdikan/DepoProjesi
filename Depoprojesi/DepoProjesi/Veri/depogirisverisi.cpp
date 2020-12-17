#include "depogirisverisi.h"

DepoGirisVerisi::DepoGirisVerisi(string tarih, double adet, string urun) {
   tarihSaat = tarih;
   urunAdeti = adet;
   urunNo = urun;
}

string DepoGirisVerisi::getTarihSaat() const
{
    return tarihSaat;
}

void DepoGirisVerisi::setTarihSaat(const string &value)
{
    tarihSaat = value;
}

double DepoGirisVerisi::getUrunAdeti() const
{
    return urunAdeti;
}

void DepoGirisVerisi::setUrunAdeti(double value)
{
    urunAdeti = value;
}

string DepoGirisVerisi::getUrunNo() const
{
    return urunNo;
}

void DepoGirisVerisi::setUrunNo(const string &value)
{
    urunNo = value;
}
