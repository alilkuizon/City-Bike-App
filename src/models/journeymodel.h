#ifndef JOURNEYMODEL_H
#define JOURNEYMODEL_H

#include <QString>

class JourneyModel
{
  private:
    int m_totalJourneysStarting;
    int m_totalJourneysEnding;
    double m_avgJourneyDistance;
    double m_avgJourneyDuration;

  public:
    explicit JourneyModel(int totalJourneysStarting, int totalJourneysEnding,
                          double avgJourneyDistance, double avgJourneyDuration);
    int totalJourneysStarting() const;
    int totalJourneysEnding() const;
    double avgJourneyDistance() const;
    double avgJourneyDuration() const;
};

#endif // JOURNEYMODEL_H
