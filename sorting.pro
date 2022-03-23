QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    animationthread.cpp \
    bubblesorter.cpp \
    countsorter.cpp \
    heapsorter.cpp \
    insertsorter.cpp \
    main.cpp \
    mainwindow.cpp \
    mergesorter.cpp \
    quicksorter.cpp \
    selectsorter.cpp \
    sorter.cpp

HEADERS += \
    animationthread.h \
    bubblesorter.h \
    countsorter.h \
    heapsorter.h \
    insertsorter.h \
    mainwindow.h \
    mergesorter.h \
    quicksorter.h \
    selectsorter.h \
    sorter.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
