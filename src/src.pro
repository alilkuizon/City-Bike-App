QT += quick opengl sql

QMAKE_CXXFLAGS += -Wunused-parameter -Werror

HEADERS += \
    global/globalDefinitions.h \
    interfaces/IDatabaseService.h \
    interfaces/IStationRepository.h \
    models/journeymodel.h \
    models/stationmodel.h \
    repositories/postgresstationrepository.h \
    services/postgresDatabaseService.h \
    viewmodels/stationdetailviewmodel.h \
    viewmodels/stationlistviewmodel.h

SOURCES += \
    main.cpp \
    models/journeymodel.cpp \
    models/stationmodel.cpp \
    repositories/postgresstationrepository.cpp \
    services/postgresDatabaseService.cpp \
    viewmodels/stationdetailviewmodel.cpp \
    viewmodels/stationlistviewmodel.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
