#ifndef STATIONMODEL_H
#define STATIONMODEL_H

#include <QObject>

class StationModel : public QObject
{
    Q_OBJECT
  public:
    explicit StationModel(QObject *parent = nullptr);

  signals:
};

#endif // STATIONMODEL_H
