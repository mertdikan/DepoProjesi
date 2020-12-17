#ifndef DEPOCIKISISLEMI_H
#define DEPOCIKISISLEMI_H

#include <Veri/islemdeposu.h>


class DepoCikisIslemi
{
public:
    DepoCikisIslemi(IslemDeposu &d);

    void cik();

private:
    IslemDeposu &depo;

};

#endif // DEPOCIKISISLEMI_H
