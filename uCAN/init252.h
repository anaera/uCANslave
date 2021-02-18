
#ifndef INIT252
#define	INIT252

#include <xc.h> // include processor files - each processor file is guarded.  

void initChip(void);
void initCPU(void);

void initPORTA(void);
void initPORTB(void);
void initPORTC(void);

inline void setSpeed(unsigned char num);
void initUART(void);

void initTMR0(void);
void initWDT(void);

void initINT(void);

#endif	/* INIT252 */
