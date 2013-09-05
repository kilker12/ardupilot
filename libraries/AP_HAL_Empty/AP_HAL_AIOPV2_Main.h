
#ifndef __AP_HAL_AIOPV2_MAIN_H__
#define __AP_HAL_AIOPV2_MAIN_H__

#if CONFIG_HAL_BOARD == HAL_BOARD_AIOPV2
#define AP_HAL_MAIN() extern "C" {\
    int main (void) {\
	hal.init(0, NULL);			\
        setup();\
        hal.scheduler->system_initialized(); \
        for(;;) loop();\
        return 0;\
    }\
    }
#endif // HAL_BOARD_AIOPV2

#endif // __AP_HAL_AIOPV2_MAIN_H__
