#ifndef IDATABASESERVICE_H
#define IDATABASESERVICE_H

#include <QSqlDatabase>

class IDatabaseService
{
  public:
    virtual ~IDatabaseService() = default;

    virtual bool connect() = 0;
    virtual void disconnect() = 0;
    virtual bool isConnected() const = 0;

    virtual bool beginTransaction() = 0;
    virtual bool commitTransaction() = 0;
    virtual bool rollbackTransaction() = 0;

    virtual QSqlDatabase &getConnection() = 0;
};
#endif // IDATABASESERVICE_H
