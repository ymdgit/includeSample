#include <ArduinoTestSuite.h>

void setup()
{
    ATS_begin("Arduino", "String Addition Test");
    int startMemoryUsage = ATS_GetFreeMemory();
    Serial.println(startMemoryUsage);
}

void loop()
{
}


