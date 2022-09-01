/**
 * @file  SquidFleeGoal.hpp
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
 * @brief MC class SquidFleeGoal.
 *
 */
class SquidFleeGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDFLEEGOAL
public:
    class SquidFleeGoal& operator=(class SquidFleeGoal const &) = delete;
    SquidFleeGoal(class SquidFleeGoal const &) = delete;
    SquidFleeGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   684697273
     */
    virtual ~SquidFleeGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@SquidFleeGoal@@UEAA_NXZ
     * @hash   -535745259
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@SquidFleeGoal@@UEAA_NXZ
     * @hash   771458611
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@SquidFleeGoal@@UEAAXXZ
     * @hash   1975004670
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@SquidFleeGoal@@UEAAXXZ
     * @hash   -770834018
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@SquidFleeGoal@@UEAAXXZ
     * @hash   232862649
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SquidFleeGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   229579499
     */
    virtual void appendDebugInfo(std::string &) const;

};