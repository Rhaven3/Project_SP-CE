QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    currentdatetime.cpp \
    extractor.cpp \
    log.cpp \
    logger.cpp \
    main.cpp \
    mainwindow.cpp \
    scanerr.cpp \
    test.cpp

HEADERS += \
    currentdatetime.h \
    extractor.h \
    log.h \
    logger.h \
    mainwindow.h \
    scanerr.h \
    test.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
