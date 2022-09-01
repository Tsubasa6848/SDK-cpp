/**
 * @file  SlimeAttackGoal.hpp
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
 * @brief MC class SlimeAttackGoal.
 *
 */
class SlimeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEATTACKGOAL
public:
    class SlimeAttackGoal& operator=(class SlimeAttackGoal const &) = delete;
    SlimeAttackGoal(class SlimeAttackGoal const &) = delete;
    SlimeAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -71920335
     */
    virtual ~SlimeAttackGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@SlimeAttackGoal@@UEAA_NXZ
     * @hash   -307861139
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@SlimeAttackGoal@@UEAA_NXZ
     * @hash   432969995
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@SlimeAttackGoal@@UEAAXXZ
     * @hash   2059475910
     */
    virtual void start();
    /**
     * @vftbl  5
     * @hash   -1404784507
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?tick@SlimeAttackGoal@@UEAAXXZ
     * @hash   -1507608463
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SlimeAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -873115197
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0SlimeAttackGoal@@QEAA@AEAVMob@@@Z
     * @hash   5979466
     */
    MCAPI SlimeAttackGoal(class Mob &);

};