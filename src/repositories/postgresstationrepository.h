#ifndef POSTGRESSTATIONREPOSITORY_H
#define POSTGRESSTATIONREPOSITORY_H

#include <QObject>

class PostgresStationRepository : public QObject
{
    Q_OBJECT
  public:
    explicit PostgresStationRepository(QObject *parent = nullptr);

  signals:
};

#endif // POSTGRESSTATIONREPOSITORY_H
