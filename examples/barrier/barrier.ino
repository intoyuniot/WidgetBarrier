/*
************************************************************************
* 作者:  IntoRobot Team 
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
障碍物检测：检测障碍物

所需器件:
1.E18-D80NK 红外光电开关 漫反射式避障传感器模块

接线说明:
E18-D80NK                    核心板
1.红色线                     +5V
2.黑色线                     GND
3.黄色线                     D0
*/

#include <WidgetBarrier.h>

#define SEROER_PIN   D0

WidgetBarrier barrier = WidgetBarrier();

void setup()
{
	pinMode(SEROER_PIN, INPUT_PULLUP);
}

void loop()
{
	//输出低电平表示检测到障碍物
	barrier.displayBarrierStatus(digitalRead(SEROER_PIN));
	delay(3000);
}
