QT += core gui
QT += multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
lessThan(QT_MAJOR_VERSION, 5): CONFIG  += designer plugin

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    NavBar.cpp \
    NavBarHeader.cpp \
    NavBarPage.cpp \
    NavBarPagelistWidget.cpp \
    NavBarSplitter.cpp \
    main.cpp \
    mainwindow.cpp \
    qNavibarHeader.cpp

HEADERS += \
    NavBar.h \
    NavBarHeader.h \
    NavBarPage.h \
    NavBarPagelistWidget.h \
    NavBarSplitter.h \
    mainwindow.h \
    qNavibarHeader.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    FirstDemo_en_AS.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
