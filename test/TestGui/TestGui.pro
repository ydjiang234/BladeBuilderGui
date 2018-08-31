#-------------------------------------------------
#
# Project created by QtCreator 2018-08-31T16:02:43
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = TestGui
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS WIN_NUIG

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    main.cpp \
    ../../src/BasicComponent/button1.cpp \
    ../../src/BasicComponent/label1.cpp \
    ../../src/MainWidget/mainsection.cpp \
    ../../src/BasicComponent/title1.cpp \
    ../../src/MainWidget/generalsec.cpp \
    ../../src/MainWidget/manager1.cpp \
    ../../src/MainWidget/manager2.cpp \
    ../../src/MainWidget/patternmanager.cpp

HEADERS += \
    ../../src/BasicComponent/button1.h \
    ../../src/BasicComponent/label1.h \
    ../../src/MainWidget/mainsection.h \
    ../../src/BasicComponent/title1.h \
    ../../src/MainWidget/generalsec.h \
    ../../src/MainWidget/manager1.h \
    ../../src/MainWidget/manager2.h \
    ../../src/MainWidget/patternmanager.h

INCLUDEPATH += \
    ../../src/BasicComponent \
    ../../src/MainWidget \
    C:/Users/0122172s/Documents/GitHub/CPP/rapidjson/include \
    C:/Users/0122172s/Documents/GitHub/CPP/eigen-eigen/Eigen \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
