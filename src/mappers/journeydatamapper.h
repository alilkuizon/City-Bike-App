#ifndef JOURNEYDATAMAPPER_H
#define JOURNEYDATAMAPPER_H

#include <QObject>

class JourneyDataMapper : public QObject
{
    Q_OBJECT
  public:
    explicit JourneyDataMapper(QObject *parent = nullptr);

  signals:
};

#endif // JOURNEYDATAMAPPER_H
