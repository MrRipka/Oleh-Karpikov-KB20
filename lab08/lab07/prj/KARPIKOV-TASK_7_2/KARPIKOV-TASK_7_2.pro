TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.c

QMAKE_LFLAGS += -static -static-libgcc -static-libstdc++ -lpthread
