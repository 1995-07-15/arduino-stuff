# Primitive Air Quality Tracking to Thinger

This Arduino program for ESP8862 reads raw gas concentration values from a Groove MQ5 gas sensor and reports the data to Thinger.

The gas concentration value is an integer between 0 and 1023. The MQ5 sensor is supposed to detect concentrations of H2, LPG, CH4, CO, and alcohol between 200ppm and 10000ppm, where the relation between the sensor value and gas concentration is nonlinear. [Details](http://wiki.seeed.cc/Grove-Gas_Sensor-MQ5/)

Tested with a Wemos D1 mini board.

## TODO

- Save energy by setting the board into deep sleep mode for a minute after reading a value
