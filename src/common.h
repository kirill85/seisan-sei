#ifndef COMMON_H
#define	COMMON_H

#ifdef	__cplusplus
extern "C" {
#endif

#ifdef	__cplusplus
}
#endif

#include "../contribs/lo-0.888/LightOPC/lightopc.h"
loService** serviceResult = NULL;
const int MAX_TAGS_COUNT = 500;
loService* mainService = NULL;

static void setupDriver(void); 

#endif	/* COMMON_H */

