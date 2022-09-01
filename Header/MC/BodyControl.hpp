/**
 * @file  BodyControl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BodyControl.
 *
 */
class BodyControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BODYCONTROL
public:
    class BodyControl& operator=(class BodyControl const &) = delete;
    BodyControl(class BodyControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2062990039
     */
    virtual ~BodyControl();
    /**
     * @vftbl  1
     * @symbol ?clientTick@BodyControl@@UEAAXAEAVMob@@@Z
     * @hash   -1112512648
     */
    virtual void clientTick(class Mob &);
    /**
     * @symbol ??0BodyControl@@QEAA@XZ
     * @hash   -1879707049
     */
    MCAPI BodyControl();

//private:

private:
    /**
     * @symbol ?MAX_CLAMP_ANGLE@BodyControl@@0MB
     * @hash   1535724716
     */
    MCAPI static float const MAX_CLAMP_ANGLE;

};