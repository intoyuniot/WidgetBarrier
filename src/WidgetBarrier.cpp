
#include "WidgetBarrier.h"


WidgetBarrier::WidgetBarrier(uint8_t ucItem)
{
    _Item = ucItem;
    memset(pDataStatusTopic,0,sizeof(pDataStatusTopic));
    sprintf(pDataStatusTopic,"channel/barrier_%d/data/status",_Item);
}

WidgetBarrier::~WidgetBarrier()
{
}

void WidgetBarrier::begin(void (*UserCallBack)(void))
{
}

void WidgetBarrier::displayBarrierStatus(uint8_t status)
{
	IntoRobot.publish(pDataStatusTopic,status);
}









