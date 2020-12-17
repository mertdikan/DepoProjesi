TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Veri/depocikisverisi.cpp \
    Veri/depogirisverisi.cpp \
    Veri/islemdeposu.cpp \
    Islemler/depocikisislemi.cpp \
    Islemler/depogirisislemi.cpp \
    Islemler/depohareketleriislemi.cpp \
    Islemler/menu.cpp

HEADERS += \
    Veri/depocikisverisi.h \
    Veri/depogirisverisi.h \
    Veri/islemdeposu.h \
    Islemler/depocikisislemi.h \
    Islemler/depogirisislemi.h \
    Islemler/depohareketleriislemi.h \
    Islemler/menu.h
