#ifndef STATIONDETAILVIEWMODEL_H
#define STATIONDETAILVIEWMODEL_H

#include <QObject>

class StationDetailViewModel : public QObject
{
    Q_OBJECT
  public:
    explicit StationDetailViewModel(QObject *parent = nullptr);

  signals:
};

#endif // STATIONDETAILVIEWMODEL_H
