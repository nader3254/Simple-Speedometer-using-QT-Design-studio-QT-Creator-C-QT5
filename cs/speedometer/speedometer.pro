QT += quick

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        SystemGraphics.cpp \
        main.cpp

RESOURCES += qml.qrc \
    image.qrc


# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH +=

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    images/back_ground3.png \
    images/background.png \
    images/carspeedometer_background.png \
    images/car.png \
    images/f_grd1.png \
    images/f_grd2.png \
    images/f_grd4.png \
    images/f_grd5.png \
    images/fuel_icon.png \
    images/left_pointer.png \
    images/logo.png \
    images/notift_background.png \
    images/right_pointer.png \
    images/startup.png \
    images/whether2.png


#INCLUDEPATH += $$PWD/../../../../../../piQt/sysroot/usr/local/include
#DEPENDPATH += $$PWD/../../../../../../piQt/sysroot/usr/local/include

HEADERS += \
    SystemGraphics.h
