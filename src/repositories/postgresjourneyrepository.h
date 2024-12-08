#ifndef POSTGRESJOURNEYREPOSITORY_H
#define POSTGRESJOURNEYREPOSITORY_H

#include <QObject>

class PostgresJourneyRepository : public QObject
{
    Q_OBJECT
  public:
    explicit PostgresJourneyRepository(QObject *parent = nullptr);

  signals:
};

#endif // POSTGRESJOURNEYREPOSITORY_H
