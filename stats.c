#include "stats.h"
#include <math.h>
#ifdef NAN
/* NAN is supported */
#endif

struct Stats compute_statistics(const float* numberset, int setlength)
{
    int i;
    float sum = 0.0;
    struct Stats S;
    int max_num = numberset[0];
    int min_num = numberset[0];
    if(setlength == 0)
    {
        S = NAN
    }else
    {
        for(i = 0; i <= setlength; i++)
        {
            sum = sum + numberset[i];
            if(max_num > numberset[i])
            {
                max_num = numberset[i];
            }
             if(min_num < numberset[i])
            {
                min_num = numberset[i];
            }       
        }

        S.average = sum/setlength;
        S.min = min_num;
        S.max = max_num;
    }
    
    return S;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
