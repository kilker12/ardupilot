#include "AnalogIn.h"

using namespace AIOPV2;

AIOPV2AnalogSource::AIOPV2AnalogSource(float v) :
    _v(v)
{}

float AIOPV2AnalogSource::read_average() {
    return _v;
}

float AIOPV2AnalogSource::voltage_average() {
    return 5.0 * _v / 1024.0;
}

float AIOPV2AnalogSource::read_latest() {
    return _v;
}

void AIOPV2AnalogSource::set_pin(uint8_t p)
{}

void AIOPV2AnalogSource::set_stop_pin(uint8_t p)
{}

void AIOPV2AnalogSource::set_settle_time(uint16_t settle_time_ms)
{}

AIOPV2AnalogIn::AIOPV2AnalogIn()
{}

void AIOPV2AnalogIn::init(void* machtnichts)
{}

AP_HAL::AnalogSource* AIOPV2AnalogIn::channel(int16_t n) {
    return new AIOPV2(1.11);
}


