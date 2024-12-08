#ifndef JOURNEYMODEL_H
#define JOURNEYMODEL_H

#include <QObject>

class JourneyModel : public QObject
{
    Q_OBJECT
  public:
    explicit JourneyModel(QObject *parent = nullptr);

  signals:
};

#endif // JOURNEYMODEL_H
