#ifndef _ELECTROTEST_H
#define _ELECTROTEST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "../libpower/src/power.h"
#include "../libresistance/src/resistance.h"
#include "../libcomponent/main/component.h"

#define MAXWORDS 1024

typedef struct Electro{
  float *comps;
  float *res_array;
  float volt;
  char conn;
  int count;
}Electro;

void get_voltage(Electro *e);
void get_conn(Electro *e);
void get_comps(Electro *e);

#endif


