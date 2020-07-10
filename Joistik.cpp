#include "Arduino.h"
#include "JOISTIK.h"

JoistikPin::JoistikPin(
        int EksenX, int EksenY) {
    this->EksenX= EksenX;
    this->EksenY = EksenY;
    pinMode(EksenX, INPUT);
    pinMode(EksenY, INPUT);
}
double JoistikPin::XEkseni(int olcumX) {
 olcumX=analogRead(EksenX);
 olcumX=map(OlcumX,0,1023,-100,100);

}


double JoistikPin::YEkseni(int olcumY) {
 olcumY=analogRead(EksenY);
 olcumY=map(OlcumY,0,1023,-100,100);

}
