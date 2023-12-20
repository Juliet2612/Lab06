#include <stdio.h>
#include <windows.h>
#include "mySphere.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int32_t radius, height;

    readRandH(&radius, &height);

    double circleArea = area(radius);
    double circleVol = volume(radius);
    double segmentVol = slice(radius, height);

    printf("Pole powierzchni koła: %.2lf\n", circleArea);
    printf("Objętość kuli: %.2lf\n", circleVol);
    printf("Objętość wycinka kuli: %.2lf\n", segmentVol);

    return 0;
}