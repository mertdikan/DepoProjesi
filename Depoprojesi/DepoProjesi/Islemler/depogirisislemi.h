#ifndef DEPOGIRISISLEMI_H
#define DEPOGIRISISLEMI_H

#include "Veri/islemdeposu.h"

class DepoGirisIslemi {
public:
    DepoGirisIslemi(IslemDeposu &d);

    void gir();

private:
    IslemDeposu &depo;

};

#endif // DEPOGIRISISLEMI_H
