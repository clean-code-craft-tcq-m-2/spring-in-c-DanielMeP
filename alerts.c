#include "stats.h"
#include "alerts.h"

void emailAlerter()
{
  emailAlertCallCount++;
};

void ledAlerter()
{
  ledAlertCallCount++;
};

check_and_alert(maxThreshold, alerters, computedStats)
{
  if(maxThreshold>computedStats.max)
  {
    emailAlerter();
    ledAlerter();
  }
}
