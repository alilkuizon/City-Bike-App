#ifndef STATIONMODEL_H
#define STATIONMODEL_H

#include <QString>

class StationModel
{
  public:
    explicit StationModel(int id, const QString &name, const QString &address);

    int id() const { return m_id; }
    QString name() const { return m_name; }
    QString address() const { return m_address; }

  private:
    int m_id;
    QString m_name;
    QString m_address;
};

#endif // STATIONMODEL_H
