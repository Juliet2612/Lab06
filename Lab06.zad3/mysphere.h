#include <stdint.h>
#include <math.h>
double area(int32_t r);
double volume(int32_t r);
double slice(int32_t r, int32_t h);
void readR(int32_t *r);
void readRandH(int32_t *r, int32_t *h);