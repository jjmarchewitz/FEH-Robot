#ifndef SCREENCONTROLLER_H
#define SCREENCONTROLLER_H

#include <string.h>
#include "CdSController.h"
#include "Optosensors.h"

using namespace std;


class ScreenController
{
public:
    ScreenController();

    void clearScreen();

    void displayFullScreenMessage(const char*);
    void displayBatteryVoltage();
    void displayCdSReading();

    void displayOptosensorReading(char);
    void displayOptosensorDetection(char);

    void displayAllOptosensorReading();
    void displayAllOptosensorDetection();

    void displayEncoderCount(char);
    void displayEncoderDistance(char);

    void displayAllEncoderCounts();
    void displayAllEncoderDistances();
};

extern ScreenController screen;

#endif // SCREENCONTROLLER_H
