#ifndef _CONFIG_H_
#define _CONFIG_H_

#include <Arduino.h>   //  for string type
#warning fix include error for string type remove arduino
//#include <string.h> 

extern const char* VERSION;

//extern String treadmill_name;
//extern float max_speed;
//extern float min_speed;
//extern float max_incline; // incline/grade in percent(!)
//extern float min_incline;
//extern long  belt_distance; // mm ... actually circumfence of motor wheel!
//extern float incline_interval_step;
//extern volatile float speed_interval_step;
//extern bool hasMPU6050;
//extern bool hasVL53L0X;
//extern bool hasIrSense;
//extern bool hasReed;

struct TreadmillConfiguration
{
    public:
    String treadmill_name;
    float max_speed;
    float min_speed;
    float max_incline; // incline/grade in percent(!)
    float min_incline;
    float incline_interval_step;
    float speed_interval_step;
    long  belt_distance; // mm ... actually circumfence of motor wheel!
    bool  hasMPU6050;
    bool  hasVL53L0X;
    bool  hasIrSense;
    bool  hasReed;
};

extern TreadmillConfiguration configTreadmill;

void initConfig(void);

#endif