#include "stationlistviewmodel.h"

StationListViewModel::StationListViewModel(QSharedPointer<IStationRepository> repository, QObject *)
{
    m_repository = repository;
}

int StationListViewModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return 0;
}

QVariant StationListViewModel::data(const QModelIndex &index, int role) const
{
    Q_UNUSED(index);
    Q_UNUSED(role);
    return QVariant("");
}
