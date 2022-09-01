/**
 * @file  StickInGroundSubcomponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StickInGroundSubcomponent.
 *
 */
class StickInGroundSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STICKINGROUNDSUBCOMPONENT
public:
    class StickInGroundSubcomponent& operator=(class StickInGroundSubcomponent const &) = delete;
    StickInGroundSubcomponent(class StickInGroundSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   209699303
     */
    virtual ~StickInGroundSubcomponent();
    /**
     * @vftbl  1
     * @symbol ?readfromJSON@StickInGroundSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   1539400495
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vftbl  2
     * @symbol ?writetoJSON@StickInGroundSubcomponent@@UEBAXAEAVValue@Json@@@Z
     * @hash   1972276682
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vftbl  3
     * @symbol ?doOnHitEffect@StickInGroundSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     * @hash   -1644757575
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vftbl  4
     * @symbol ?getName@StickInGroundSubcomponent@@UEAAPEBDXZ
     * @hash   -830826204
     */
    virtual char const * getName();
    /**
     * @symbol ??0StickInGroundSubcomponent@@QEAA@XZ
     * @hash   -114929051
     */
    MCAPI StickInGroundSubcomponent();

};