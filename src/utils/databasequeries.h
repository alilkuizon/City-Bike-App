#ifndef DATABASEQUERIES_H
#define DATABASEQUERIES_H

#include <QObject>

class DatabaseQueries : public QObject
{
    Q_OBJECT
  public:
    explicit DatabaseQueries(QObject *parent = nullptr);

  signals:
};

#endif // DATABASEQUERIES_H
