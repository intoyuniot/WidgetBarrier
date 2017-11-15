#ifndef WIDGET_BARRIER_H_
#define WIDGET_BARRIER_H_

#include "application.h"


class WidgetBarrier
{
public:
    WidgetBarrier(uint8_t ucItem = 0);
    ~WidgetBarrier();
    void begin(void (*UserCallBack)(void) = NULL);
    void displayBarrierStatus(uint8_t status);

private:
    char pDataStatusTopic[64];
    uint8_t _Item=0;         
};

#endif
