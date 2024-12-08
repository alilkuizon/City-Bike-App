QT += quick opengl

HEADERS += \
    core/ApplicationContext.h \
    interfaces/IDataMapper.h \
    interfaces/IDatabaseService.h \
    interfaces/IJourneyRepository.h \
    interfaces/IStationRepository.h \
    mappers/journeydatamapper.h \
    mappers/stationdatamapper.h \
    models/journeymodel.h \
    models/stationmodel.h \
    repositories/postgresjourneyrepository.h \
    repositories/postgresstationrepository.h \
    services/postgresDatabaseService.h \
    utils/databasequeries.h \
    viewmodels/stationdetailviewmodel.h \
    viewmodels/stationlistviewmodel.h

SOURCES += \
    main.cpp \
    mappers/journeydatamapper.cpp \
    mappers/stationdatamapper.cpp \
    models/journeymodel.cpp \
    models/stationmodel.cpp \
    repositories/postgresjourneyrepository.cpp \
    repositories/postgresstationrepository.cpp \
    services/postgresDatabaseService.cpp \
    utils/databasequeries.cpp \
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
