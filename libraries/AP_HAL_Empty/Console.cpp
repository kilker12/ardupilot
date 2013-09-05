#include <stdarg.h>
#include "Console.h"

using namespace AIOPV2;

AIOPV2ConsoleDriver::AIOPV2ConsoleDriver(AP_HAL::BetterStream* delegate) :
    _d(delegate)
{}

void AIOPV2ConsoleDriver::init(void* machtnichts)
{}

void AIOPV2ConsoleDriver::backend_open()
{}

void AIOPV2ConsoleDriver::backend_close()
{}

size_t AIOPV2ConsoleDriver::backend_read(uint8_t *data, size_t len) {
    return 0;
}

size_t AIOPV2ConsoleDriver::backend_write(const uint8_t *data, size_t len) {
    return 0;
}

void AIOPV2ConsoleDriver::print_P(const prog_char_t *pstr) {
    _d->print_P(pstr);
}

void AIOPV2ConsoleDriver::println_P(const prog_char_t *pstr) {
    _d->println_P(pstr);
}

void AIOPV2ConsoleDriver::printf(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    vprintf(fmt, ap);
    va_end(ap);
}

void AIOPV2::_printf_P(const prog_char *fmt, ...) {
    va_list ap;
    va_start(ap,fmt);
    vprintf_P(fmt, ap);
    va_end(ap);
}

void AIOPV2ConsoleDriver::vprintf(const char *fmt, va_list ap) {
    _d->vprintf(fmt, ap);
}

void AIOPV2ConsoleDriver::vprintf_P(const prog_char *fmt, va_list ap) {
    _d->vprintf_P(fmt, ap);
}

int16_t AIOPV2::available() {
    return _d->available();
}

int16_t AIOPV2ConsoleDriver::txspace() {
    return _d->txspace();
}

int16_t AIOPV2ConsoleDriver::read() {
    return _d->read();
}

size_t AIOPV2ConsoleDriver::write(uint8_t c) {
    return _d->write(c);
}

