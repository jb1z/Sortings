QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    sorter_0_base.cpp \
    sorter_1_bubble.cpp \
    sorter_2_insert.cpp \
    sorter_3_select.cpp \
    sorter_4_quick.cpp \
    sorter_5_merge.cpp \
    sorter_6_heap.cpp \
    sorter_7_count.cpp \
    sorting_animator.cpp

HEADERS += \
    mainwindow.h \
    sorter_0_base.h \
    sorter_1_bubble.h \
    sorter_2_insert.h \
    sorter_3_select.h \
    sorter_4_quick.h \
    sorter_5_merge.h \
    sorter_6_heap.h \
    sorter_7_count.h \
    sorting_animator.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
