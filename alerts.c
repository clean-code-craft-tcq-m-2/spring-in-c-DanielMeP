#include "stats.h"
#include "alerts.h"

void emailAlerter()
{
  emailAlertCallCount++;
  return;
}

void ledAlerter()
{
  ledAlertCallCount++;
  return;
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  int i;
  if(maxThreshold>computedStats.max)
  {
    for(i=0;i<2;i++){
    alerters[i]();
    }
  }
}
