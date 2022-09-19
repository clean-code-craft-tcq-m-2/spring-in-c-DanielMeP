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
    float max_num = numberset;
    float min_num = numberset;
    if(setlength == 0)
    {   
        S.average = NAN;
        S.min = NAN;
        S.max = NAN;
    }else
    {
        for(i = 0; i <= setlength; i++)
        {
            sum = sum + *numberset;
            if(max_num > *numberset)
            {
                max_num = *numberset;
            }
             if(min_num < *numberset)
            {
                min_num = *numberset;
            }       
            numberset++;
        }
        S.average = sum/setlength;
        S.min = min_num;
        S.max = max_num;
    }
    
    return S;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
