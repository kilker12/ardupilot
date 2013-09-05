#ifndef __AP_HAL_AIOPV2_CLASS_H__
#define __AP_HAL_AIOPV2_CLASS_H__

#include <AP_HAL.h>

#include "AP_HAL_AIOPV2_Namespace.h"
#include "PrivateMember.h"

class HAL_AIOPV2 : public AP_HAL::HAL {
public:
    HAL_AIOPV2();
    void init(int argc, char * const * argv) const;
private:
    AIOPV2::AIOPV2PrivateMember *_member;
};

extern const HAL_AIOPV2 AP_HAL_AIOPV2;

#endif // __AP_HAL_AIOPV2_CLASS_H__

