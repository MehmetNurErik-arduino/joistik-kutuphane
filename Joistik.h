

#ifndef JOISTIK_H
#define JOISTIK_H

#include "Arduino.h"

class JoistikPin {
 public:
    JoistikPin(int EksenX, int EksenY);
    double uzaklikCm();
    double uzaklikCm(float temperature);
 private:
    int EksenX, EksenY;
};

#endif // JOISTIK_H

