#include "journeymodel.h"

JourneyModel::JourneyModel(int totalJourneysStarting, int totalJourneysEnding,
                           double avgJourneyDistance, double avgJourneyDuration)
    : m_totalJourneysStarting(totalJourneysStarting), m_totalJourneysEnding(totalJourneysEnding),
      m_avgJourneyDistance(avgJourneyDistance), m_avgJourneyDuration(avgJourneyDuration)
{
}

int JourneyModel::totalJourneysStarting() const
{
    return m_totalJourneysStarting;
}

int JourneyModel::totalJourneysEnding() const
{
    return m_totalJourneysEnding;
}

double JourneyModel::avgJourneyDistance() const
{
    return m_avgJourneyDistance;
}

double JourneyModel::avgJourneyDuration() const
{
    return m_avgJourneyDuration;
}
