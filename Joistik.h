

#ifndef JOISTIK_H
#define JOISTIK_H

#include "Arduino.h"

class JoistikPin {
 public:
    JoistikPin(int EksenX, int EksenY);
    double XEkseni(int olcumX);
    double YEkseni(int olcumY);
 private:
    int EksenX, EksenY;
};

#endif // JOISTIK_H

