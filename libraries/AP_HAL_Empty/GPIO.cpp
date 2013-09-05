#include "GPIO.h"

using namespace AIOPV2;

AIOPV2GPIO::AIOPV2GPIO()
{}

void AIOPV2GPIO::init()
{}

void AIOPV2GPIO::pinMode(uint8_t pin, uint8_t output)
{}

int8_t AIOPV2GPIO::analogPinToDigitalPin(uint8_t pin)
{
	return -1;
}


uint8_t AIOPV2GPIO::read(uint8_t pin) {
    return 0;
}

void AIOPV2GPIO::write(uint8_t pin, uint8_t value)
{}

/* Alternative interface: */
AP_HAL::DigitalSource* AIOPV2GPIO::channel(uint16_t n) {
    return new AIOPV2DigitalSource(0);
}

/* Interrupt interface: */
bool AIOPV2GPIO::attach_interrupt(uint8_t interrupt_num, AP_HAL::Proc p,
        uint8_t mode) {
    return true;
}


AIOPV2DigitalSource::AIOPV2DigitalSource(uint8_t v) :
    _v(v)
{}

void AIOPV2DigitalSource::mode(uint8_t output)
{}

uint8_t AIOPV2DigitalSource::read() {
    return _v;
}

void EmptyDigitalSource::write(uint8_t value) {
    _v = value;
}

