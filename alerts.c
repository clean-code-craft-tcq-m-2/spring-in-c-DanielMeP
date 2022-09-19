#include "stats.h"
#include "alerts.h"

emailAlerter()
{
  emailAlertCallCount++;
}

ledAlerter()
{
  ledAlertCallCount++;
}

check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
{
  if(maxThreshold>computedStats.max)
  {
    emailAlerter();
    ledAlerter();
  }
}
