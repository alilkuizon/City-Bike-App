#ifndef STATIONLISTVIEWMODEL_H
#define STATIONLISTVIEWMODEL_H

#include <QAbstractListModel>
#include <QObject>
#include <interfaces/IStationRepository.h>

class StationListViewModel : public QAbstractListModel
{
    Q_OBJECT
  public:
    explicit StationListViewModel(QSharedPointer<IStationRepository> repository,
                                  QObject *parent = nullptr);

    // QAbstractItemModel interface
  public:
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;

  private:
    QList<StationModel> m_stations;
    QSharedPointer<IStationRepository> m_repository;
};

#endif // STATIONLISTVIEWMODEL_H
