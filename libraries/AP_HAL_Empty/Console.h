#ifndef __AP_HAL_AIOPV2_CONSOLE_H__
#define __AP_HAL_AIOPV2_CONSOLE_H__

#include <AP_HAL_AIOPV2.h>

class AIOPV2::AIOPV2ConsoleDriver : public AP_HAL::ConsoleDriver {
public:
    AIOPV2ConsoleDriver(AP_HAL::BetterStream* delegate);
    void init(void* machtnichts);
    void backend_open();
    void backend_close();
    size_t backend_read(uint8_t *data, size_t len);
    size_t backend_write(const uint8_t *data, size_t len);

    void print_P(const prog_char_t *pstr);
    void println_P(const prog_char_t *pstr);
    void printf(const char *pstr, ...);
    void _printf_P(const prog_char *pstr, ...);
    void vprintf(const char *pstr, va_list ap);
    void vprintf_P(const prog_char *pstr, va_list ap);

    int16_t available();
    int16_t txspace();
    int16_t read();

    size_t write(uint8_t c);
private:
    AP_HAL::BetterStream *_d;
};

#endif // __AP_HAL_AIOPV2_CONSOLE_H__
