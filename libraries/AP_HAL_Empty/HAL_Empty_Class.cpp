#include <AP_HAL.h>
#if CONFIG_HAL_BOARD == HAL_BOARD_AIOPV2

#include "HAL_AIOPV2_Class.h"
#include "AP_HAL_AIOPV2_Private.h"

using namespace AIOPV2;

static AIOPV2UARTDriver uartADriver;
static AIOPV2UARTDriver uartBDriver;
static AIOPV2UARTDriver uartCDriver;
static AIOPV2Semaphore  i2cSemaphore;
static AIOPV2I2CDriver  i2cDriver(&i2cSemaphore);
static AIOPV2SPIDeviceManager spiDeviceManager;
static AIOPV2AnalogIn analogIn;
static AIOPV2Storage storageDriver;
static AIOPV2ConsoleDriver consoleDriver(&uartADriver);
static AIOPV2GPIO gpioDriver;
static AIOPV2RCInput rcinDriver;
static AIOPV2RCOutput rcoutDriver;
static AIOPV2Scheduler schedulerInstance;
static AIOPV2Util utilInstance;

HAL_Empty::HAL_Empty() :
    AP_HAL::HAL(
        &uartADriver,
        &uartBDriver,
        &uartCDriver,
        &i2cDriver,
        &spiDeviceManager,
        &analogIn,
        &storageDriver,
        &consoleDriver,
        &gpioDriver,
        &rcinDriver,
        &rcoutDriver,
        &schedulerInstance,
        &utilInstance),
    _member(new EmptyPrivateMember(123))
{}

void HAL_Empty::init(int argc,char* const argv[]) const {
    /* initialize all drivers and private members here.
     * up to the programmer to do this in the correct order.
     * Scheduler should likely come first. */
    scheduler->init(NULL);
    uartA->begin(115200);
    _member->init();
}

const HAL_Empty AP_HAL_Empty;

#endif
