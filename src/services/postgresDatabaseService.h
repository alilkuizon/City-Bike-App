#ifndef POSTGRESDATABASESERVICE_H
#define POSTGRESDATABASESERVICE_H

#include <QObject>
#include <QSqlError>
#include <interfaces/IDatabaseService.h>

class PostgresDatabaseService : public QObject, public IDatabaseService
{
    Q_OBJECT
  private:
    QSqlDatabase m_database;
    QString m_connectionName;

  public:
    explicit PostgresDatabaseService(QObject *);

  signals:

    // IDatabaseService interface
  public:
    bool connect();
    void disconnect();
    bool isConnected() const;
    bool beginTransaction();
    bool commitTransaction();
    bool rollbackTransaction();
    QSqlDatabase &getConnection();
};

#endif // POSTGRESDATABASESERVICE_H
