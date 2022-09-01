/**
 * @file  FakeThermalMonitorInterface.hpp
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
 * @brief MC class FakeThermalMonitorInterface.
 *
 */
class FakeThermalMonitorInterface {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FAKETHERMALMONITORINTERFACE
public:
    class FakeThermalMonitorInterface& operator=(class FakeThermalMonitorInterface const &) = delete;
    FakeThermalMonitorInterface(class FakeThermalMonitorInterface const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   622704751
     */
    virtual ~FakeThermalMonitorInterface();
    /**
     * @vftbl  1
     * @symbol ?getThermalState@FakeThermalMonitorInterface@@UEBA?AW4ThermalState@@XZ
     * @hash   1535821013
     */
    virtual enum ThermalState getThermalState() const;
    /**
     * @vftbl  2
     * @symbol ?getThermalValueCelsius@FakeThermalMonitorInterface@@UEBAMXZ
     * @hash   749163
     */
    virtual float getThermalValueCelsius() const;
    /**
     * @vftbl  3
     * @symbol ?isLowBatteryModeEnabled@FakeThermalMonitorInterface@@UEBA_NXZ
     * @hash   -214910766
     */
    virtual bool isLowBatteryModeEnabled() const;
    /**
     * @symbol ??0FakeThermalMonitorInterface@@QEAA@XZ
     * @hash   659487517
     */
    MCAPI FakeThermalMonitorInterface();

};