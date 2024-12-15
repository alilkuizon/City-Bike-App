#ifndef ISTATIONREPOSITORY_H
#define ISTATIONREPOSITORY_H

#include "./models/journeymodel.h"
#include "./models/stationmodel.h"
#include <QList>
#include <QSharedPointer>

class IStationRepository
{
  public:
    virtual ~IStationRepository() = default;

    virtual QList<StationModel> getAllStations() = 0;
    virtual QSharedPointer<StationModel> getStationById(int stationId) = 0;
    virtual QSharedPointer<JourneyModel> getJourneyStatistics(int stationId) = 0;
};

#endif // ISTATIONREPOSITORY_H
