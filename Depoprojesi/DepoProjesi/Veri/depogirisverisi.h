#ifndef DEPOGIRISVERISI_H
#define DEPOGIRISVERISI_H

#include <string>

using namespace std;

class DepoGirisVerisi {
public:
    DepoGirisVerisi(string tarih = "2000-06-01 08:00:00",
                     double adet = 0,
                     string urun = "");

    string getTarihSaat() const;
    void setTarihSaat(const string &value);

    double getUrunAdeti() const;
    void setUrunAdeti(double value);

    string getUrunNo() const;
    void setUrunNo(const string &value);

private:
    string tarihSaat;
    double urunAdeti;
    string urunNo;
};

#endif // DEPOGIRISVERISI_H
