#ifndef STATIONDATAMAPPER_H
#define STATIONDATAMAPPER_H

#include <QObject>

class StationDataMapper : public QObject
{
    Q_OBJECT
  public:
    explicit StationDataMapper(QObject *parent = nullptr);

  signals:
};

#endif // STATIONDATAMAPPER_H
