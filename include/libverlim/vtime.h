#ifndef VTIME_H_
#define VTIME_H_

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define DEF_TIME TOSTRING(__TIME__)
#define DEF_DATE TOSTRING(__DATE__)
#define DEF_TIME_AND_DATE TOSTRING(__TIME__) " : " TOSTRING(__DATE__) 

#endif // VTIME_H_
