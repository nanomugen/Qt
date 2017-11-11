TEMPLATE = app
TARGET = test_qt02

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    window.cpp

HEADERS += \
    class02.h \
    window.h
