QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    avtoriz.cpp \
    main.cpp \
    mainwindow.cpp \
    napominanie.cpp \
    polzovatel.cpp \
    registr.cpp \
    trenirovki.cpp

HEADERS += \
    avtoriz.h \
    mainwindow.h \
    napominanie.h \
    polzovatel.h \
    registr.h \
    trenirovki.h

FORMS += \
    avtoriz.ui \
    mainwindow.ui \
    napominanie.ui \
    polzovatel.ui \
    registr.ui \
    trenirovki.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
