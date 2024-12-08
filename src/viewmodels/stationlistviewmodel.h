#ifndef STATIONLISTVIEWMODEL_H
#define STATIONLISTVIEWMODEL_H

#include <QObject>

class StationListViewModel : public QObject
{
    Q_OBJECT
  public:
    explicit StationListViewModel(QObject *parent = nullptr);

  signals:
};

#endif // STATIONLISTVIEWMODEL_H
