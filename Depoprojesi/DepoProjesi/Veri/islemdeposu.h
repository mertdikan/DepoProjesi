#ifndef ISLEMDEPOSU_H
#define ISLEMDEPOSU_H

#include <vector>
#include <Veri/depocikisverisi.h>
#include <Veri/depogirisverisi.h>

using namespace std;

class IslemDeposu {
public:
    IslemDeposu();

    void depoGir(DepoGirisVerisi &veri);
    void depoCik(DepoCikisVerisi &veri);

    double DepoyaGirenUrun(string depo);
    double DepodanCikanUrun(string depo);

    double stok(string depo);

private:
    vector<DepoCikisVerisi> depoCikisVerileri;
    vector<DepoGirisVerisi> depoGirisVerileri;
};

#endif // ISLEMDEPOSU_H
