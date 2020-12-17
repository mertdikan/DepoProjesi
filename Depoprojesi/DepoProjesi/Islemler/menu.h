#ifndef MENU_H
#define MENU_H


#include <Veri/islemdeposu.h>

class Menu
{
public:
    Menu();

    void calistir();

private:
    IslemDeposu depo;
};

#endif // MENU_H
