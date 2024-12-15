#include "postgresstationrepository.h"

PostgresStationRepository::PostgresStationRepository(QSharedPointer<IDatabaseService> dbService)
{
    m_dbService = dbService;
}

QList<StationModel> PostgresStationRepository::getAllStations()
{
    return QList<StationModel>();
}

QSharedPointer<StationModel> PostgresStationRepository::getStationById(int stationId)
{
    Q_UNUSED(stationId);
    return QSharedPointer<StationModel>();
}

QSharedPointer<JourneyModel> PostgresStationRepository::getJourneyStatistics(int stationId)
{
    Q_UNUSED(stationId);
    return QSharedPointer<JourneyModel>();
}
