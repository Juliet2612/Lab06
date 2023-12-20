#include "mysphere.h"
#include <stdio.h>

double area(int32_t r) {
    return M_PI * r * r;
}

double volume(int32_t r) {
    return (4.0 / 3.0) * M_PI * r * r * r;
}

double slice(int32_t r, int32_t h) {
    return M_PI * h * h * (3 * r - h) / 6.0;
}

void readR(int32_t *r) {
    printf("Podaj promień kuli: ");
    scanf("%d", r);
}

void readRandH(int32_t *r, int32_t *h) {
    printf("Podaj promień kuli: ");
    scanf("%d", r);

    printf("Podaj wysokość wycinka kuli: ");
    scanf("%d", h);
}