#include <Arduino.h>

/*
 *  Project 01-blink_00
 *      Blinks a LED and prints on console LED state
 *      Austral 2022 - IntroCom - EAM
 */

static const int tdelay = 1000;

void
setup(void)
{
    pinMode(LED,OUTPUT);
    Serial.begin(BAUD);
}

void
loop(void)
{
    digitalWrite(LED,HIGH);
    Serial.println("on");
    delay(tdelay);

    digitalWrite(LED,LOW);
    Serial.println("off");
    delay(tdelay);
}
