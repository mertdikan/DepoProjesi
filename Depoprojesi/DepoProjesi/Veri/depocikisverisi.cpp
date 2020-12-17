#include "depocikisverisi.h"

DepoCikisVerisi::DepoCikisVerisi(string tarih, double adet, string urun) {
   tarihSaat = tarih;
   urunAdeti = adet;
   urunNo = urun;
}

string DepoCikisVerisi::getTarihSaat() const
{
    return tarihSaat;
}

void DepoCikisVerisi::setTarihSaat(const string &value)
{
    tarihSaat = value;
}

double DepoCikisVerisi::getUrunAdeti() const
{
    return urunAdeti;
}

void DepoCikisVerisi::setUrunAdeti(double value)
{
    urunAdeti = value;
}

string DepoCikisVerisi::getUrunNo() const
{
    return urunNo;
}

void DepoCikisVerisi::setUrunNo(const string &value)
{
    urunNo = value;
}
