#ifndef __AP_HAL_AIOPV2_NAMESPACE_H__
#define __AP_HAL_AIOPV2_NAMESPACE_H__

/* While not strictly required, names inside the Empty namespace are prefixed
 * with Empty for clarity. (Some of our users aren't familiar with all of the
 * C++ namespace rules.)
 */

namespace AIOPV2 {
    class AIOPV2UARTDriver;
    class AIOPV2I2CDriver;
    class AIOPV2SPIDeviceManager;
    class AIOPV2SPIDeviceDriver;
    class AIOPV2AnalogSource;
    class AIOPV2AnalogIn;
    class AIOPV2Storage;
    class AIOPV2ConsoleDriver;
    class AIOPV2GPIO;
    class AIOPV2DigitalSource;
    class AIOPV2RCInput;
    class AIOPV2RCOutput;
    class AIOPV2Semaphore;
    class AIOPV2Scheduler;
    class AIOPV2Util;
    class AIOPV2PrivateMember;
}

#endif // __AP_HAL_AIOPV2_NAMESPACE_H__

