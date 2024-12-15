#ifndef POSTGRESSTATIONREPOSITORY_H
#define POSTGRESSTATIONREPOSITORY_H

#include <QObject>
#include <interfaces/IDatabaseService.h>
#include <interfaces/IStationRepository.h>

class PostgresStationRepository : public QObject, public IStationRepository
{
    Q_OBJECT
  public:
    explicit PostgresStationRepository(QSharedPointer<IDatabaseService> dbService);

    QList<StationModel> getAllStations() override;
    QSharedPointer<StationModel> getStationById(int stationId) override;
    QSharedPointer<JourneyModel> getJourneyStatistics(int stationId) override;

  private:
    QSharedPointer<IDatabaseService> m_dbService;
};

#endif // POSTGRESSTATIONREPOSITORY_H
