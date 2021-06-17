QT       += core gui
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    basicClass.cpp \
    main.cpp \
    view.cpp

HEADERS += \
    ../build-div1-Desktop_Qt_6_0_3_MinGW_64_bit-Release/ui_register.h \
    basicClass.h \
    main.h \
    view.h

FORMS += \
    commodityInfo.ui \
    login.ui \
    mainWindow.ui \
    orderWindow.ui \
    userRegister.ui \
    userWindow.ui

TRANSLATIONS += \
    div1_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ImageSource.qrc
