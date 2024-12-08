#ifndef POSTGRESDATABASESERVICE_H
#define POSTGRESDATABASESERVICE_H

#include <QObject>

class PostgresDatabaseService : public QObject
{
    Q_OBJECT
  public:
    explicit PostgresDatabaseService(QObject *parent = nullptr);

  signals:
};

#endif // POSTGRESDATABASESERVICE_H
